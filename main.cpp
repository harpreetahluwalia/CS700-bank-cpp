
/**
 *  @file   main.cpp
 *  @brief  It is the main program file. It drives the whole application and interacts with the user inputs.
 *  @author Harpreet Singh
 *  @date   29/10/2021
 ***********************************************/

/**
 @mainpage Bank Application
 @author Harpreet Singh
 @date   29/10/2021


This program implements a bank application using c++ with the functionality of adding the bank account, deposit/withdraw
from bank account, get Interests or Charges on your bank accounts, and get all account details along with all the previous transactions
including interests/charges etc.

It interacts with the user and takes inputs from user according to their choices and drives the program accordingly.


*/


#include <iostream>
using namespace std;


// Including header files

#include "Customer.h"
#include "Senior.h"
#include "Student.h"
#include "Adult.h"
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Date.h"
#include "Bank.h"


/**
 * Module : main\n
 * Purpose : It interacts with the user and takes inputs from user according to their choices and drives the program accordingly.
 * Author : Harpreet Singh\n
 * Date of creation : 26/09/2021
 * Parameters : none
*/
int main()
{
 cout<<"\n Assignment 3 - CS700 - Harpreet Singh";
    int n = 0;
    Bank bank;
    while (n!=4){

        cout<<"\n\n--------------------------------------------------------\n";
        cout<< "\nSelect: \n0: Add Account\n1: Make Deposit\n2: Make Withdrawal\n3: Check Account\n4: Exit \n";

        cin>>n;
        if (n==0){              // if 0.Add Account option is selected
            string name;
            string address;
            int age;
            long long telephone_number;
                cout << "Enter Customer Name : ";
                cin>>name;
                cout<< "Enter Customer Address : ";
                cin >> address;
                cout<< "Enter Customer Age : ";
                cin >> age;
                cout << "Enter Customer Phone Number : ";
                cin >> telephone_number;
                int temp1;
                int temp2;
                cout<<"\nSelect : \n0: Senior\n1: Adult\n2: Student\n";
                cin>>temp1;
                cout<<"\nSelect:\n0: Checking\n1: Savings\n";
                cin>>temp2;

                float balance = 0.0;
                if (temp2 == 0){
                    if (temp1 == 0){

                        Senior senior(name, address, telephone_number,age);   // Created Senior class object
                        Account* checking_account = new Checking_Account;   // Created Account object pointer to checking account using assignments in class hierarchy
                        checking_account->createAccount(balance,senior); //calling createAccount method with account pointer
                        bank.add_account(checking_account);                 // adding account to Accounts* array in bank class
                    }
                    else if(temp1 == 1){
                        Adult adult(name, address, telephone_number,age);
                        Account* checking_account = new Checking_Account;
                        checking_account->createAccount(balance,adult);
                        bank.add_account(checking_account);
                    }
                    else if (temp1 = 2){
                        Student student(name, address, telephone_number,age);
                        Account* checking_account = new Checking_Account;
                        checking_account->createAccount(balance,student);
                        bank.add_account(checking_account);
                    }
                }
                else if (temp2 == 1){
                    if (temp1 == 0){
                        Senior senior(name, address, telephone_number,age);
                        Account* savings_account = new Savings_Account;
                        savings_account->createAccount(balance,senior);
                        bank.add_account(savings_account);
                    }
                    else if(temp1 == 1){
                        Adult adult(name, address, telephone_number,age);
                        Account* savings_account = new Savings_Account;
                        savings_account->createAccount(balance,adult);
                        bank.add_account(savings_account);

                    }
                    else if (temp1 = 2){
                        Student student(name, address, telephone_number,age);
                        Account* savings_account = new Savings_Account;
                        savings_account->createAccount(balance,student);
                        bank.add_account(savings_account);
                    }
                }
        }
        else if (n==1){  // if Make deposit option is selected
                long accNo;
                cout<<"Enter the Account Number : ";
                cin>>accNo;
                if(bank.get_account(accNo) == nullptr){         // Checking for incorrect account number by user
                    continue;                         // if its incorrect account no. it will continue to next the loop iteration.
                }
                float amount;
                cout<<"Enter Amount : ";
                cin>>amount;
                string d;

                // taking date in yyyy-mm-dd format and passing that to Date Class object after splitting in day,month and year.
                cout<<"Enter the date yyyy-mm-dd> ";
                cin>>d;
                int year = stoi(d.substr(0,4));
                int month = stoi(d.substr(5,6));
                int day = stoi(d.substr(8,9));
                Date date(day,month,year);


                bank.make_deposit(amount, accNo);   // Calling the make deposit function to deposit in account
                Transaction* transaction = new Transaction("DEP", amount, bank.get_account(accNo)->get_balance(),date); // Creating transaction object
                bank.get_account(accNo)->add_transaction(transaction); // adding the transaction to transaction array

                // Displaying deposit message to user on console
                cout<<"Deposit in "<<accNo<<" , Amount : $"<<amount<<" on "<<date<<" , New balance : $"<<bank.get_account(accNo)->get_balance();



                // Checking for Interest as per the the deposit time till today and adding to the account.
                time_t systime = time(0);           // creating system time object
                Date sysDate(systime);
                int diff_in_days = sysDate-date;       // diff_in_days represents no. of days from deposit till today.
                float months = (diff_in_days/30);
                float total_interest = bank.get_interest(accNo);        // calling the get_interest method
                bank.make_deposit(total_interest,accNo);            // adding the interest to account

                // displaying the interest message to console
                cout<<"\nIt is "<<diff_in_days<<" days old Deposit. Thus Interest $"<<total_interest<<" is credited to the account";

                //creating interest credit transaction and adding to transactions array
                Transaction* interest_transaction = new Transaction("INT CR", total_interest, bank.get_account(accNo)->get_balance(),sysDate);
                bank.get_account(accNo)->add_transaction(interest_transaction);

        }

        else if (n==2){   // if make withdrawal option is selected
                long accNo;
                cout<<"Enter the Account Number : ";
                cin>>accNo;
                if(bank.get_account(accNo) == nullptr){  // Checking for incorrect account number by user
                    continue;           // if its incorrect account no. it will continue to next the loop iteration.
                }

                float amount;
                cout<<"Enter Amount : ";
                cin>>amount;
                string d;
                cout<<"Enter the date yyyy-mm-dd> ";

                // taking date in yyyy-mm-dd format and passing that to Date Class object after splitting in day,month and year.
                cin>>d;
                int year = stoi(d.substr(0,4));
                int month = stoi(d.substr(5,6));
                int day = stoi(d.substr(8,9));
                Date date(day,month,year);

                // making the withdrawl and also checking if there is sufficient balance is in account, if not it will display the message
                if(!(bank.make_withdrawl(amount,accNo))){
                    cout<<"Insufficient Funds available, please try again. \nYour current balance is : $"<< bank.get_account(accNo)->get_balance();
                    continue;
                }

                //creating transaction object and adding to transactions array

                Transaction* transaction1 = new Transaction("WD", amount, bank.get_account(accNo)->get_balance(),date);
                bank.get_account(accNo)->add_transaction(transaction1);

                // displaying the withdraw message to the console

                cout<<"\nWithdraw from Account "<<bank.get_account(accNo)->get_account_number()<<" amount: $"<<amount<<" on "<<date<< " New Balance : $"<<bank.get_account(accNo)->get_balance();



                // Checking for Checking Charges

                float check_charges = bank.check_Charges(accNo);        //check_charges() will calculate the checking charges
                if (check_charges!=0){
                    bank.make_withdrawl(check_charges,accNo);
                    time_t systime = time(0);
                    Date sysDate(systime);
                    Transaction* transaction = new Transaction("CHKCHG ", check_charges, bank.get_account(accNo)->get_balance(),sysDate);
                    bank.get_account(accNo)->add_transaction(transaction);
                }
        }


        else if (n==3){         // if check account option is selected.


            long accountNo;
            cout<<"Enter Account Number : \n";
            cin>>accountNo;
            if(bank.get_account(accountNo) == nullptr){         // Checking for incorrect account number by user
                continue;                   // if its incorrect account no. it will continue to next the loop iteration.
            }

            // Printing the account details
            bank.get_account(accountNo)->to_string();

            // Alternative to print with more flexibility here :

           // cout<<"\nAccount No : " << bank.get_account(accountNo)->get_account_number();
           // cout<<"\nOwner : "<< bank.get_account(accountNo)->get_customer().get_name();
           // cout<<"\nBalance : "<< bank.balance(accountNo);
           // cout<<"\nTpye of Acc : "<<bank.get_account(accountNo)->get_customer().get_typeAcc();
           // cout<<"\nTransactions Details : \n";
           // bank.get_account(accountNo)->get_transaction();
    }
        else if (n==4){         //if exit option is selected
            break;
    }
        else {              // if incorrect option is selected
            cout<<"\nPlease choose Correct Option. \n";
        }

    }

}
