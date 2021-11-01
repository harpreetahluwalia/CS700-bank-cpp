#include <iostream>

using namespace std;

//#include <typeinfo>
#include "Customer.h"
#include "Senior.h"
#include "Student.h"
#include "Adult.h"
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Date.h"
#include "Bank.h"

int main()
{


 cout<<"\n Assignment 3 - CS700 - Harpreet Singh";
    int n = 0;
    Bank bank;
    while (n!=4){

        cout<<"\n\n--------------------------------------------------------\n";
        cout<< "\nSelect: \n0: Add Account\n1: Make Deposit\n2: Make Withdrawal\n3: Check Account\n4: Exit \n";

        cin>>n;
        if (n==0){
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

                        Senior senior(name, address, telephone_number,age);
                        Account* checking_account = new Checking_Account;
                        checking_account->createAccount(balance,senior);
                        bank.add_account(checking_account);
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


        else if (n==1){
                long accNo;
                cout<<"Enter the Account Number : ";
                cin>>accNo;
                if(bank.get_account(accNo) == nullptr){
                    continue;
                }
                float amount;
                cout<<"Enter Amount : ";
                cin>>amount;
                string d;
                cout<<"Enter the date yyyy-mm-dd> ";
                cin>>d;


                int year = stoi(d.substr(0,4));
                int month = stoi(d.substr(5,6));

                int day = stoi(d.substr(8,9));


                Date date(day,month,year);
                bank.make_deposit(amount, accNo);
                Transaction* transaction = new Transaction("DEP", amount, bank.get_account(accNo)->get_balance(),date);


                bank.get_account(accNo)->add_transaction(transaction);
                cout<<"Deposit in "<<accNo<<" , Amount : $"<<amount<<" on "<<date<<" , New balance : $"<<bank.get_account(accNo)->get_balance();



                // Adding interest if required
                time_t systime = time(0);
                Date sysDate(systime);
                int diff_in_days = sysDate-date;
                float months = (diff_in_days/30);
                float total_interest = bank.get_interest(accNo);
                bank.make_deposit(total_interest,accNo);
                cout<<"\nIt is "<<diff_in_days<<" days old Deposit. Thus Interest $"<<total_interest<<" is credited to the account";

                Transaction* interest_transaction = new Transaction("INT CR", total_interest, bank.get_account(accNo)->get_balance(),sysDate);
                bank.get_account(accNo)->add_transaction(interest_transaction);

        }

        else if (n==2){
                long accNo;
                cout<<"Enter the Account Number : ";
                cin>>accNo;
                if(bank.get_account(accNo) == nullptr){
                    continue;
                }

                float amount;
                cout<<"Enter Amount : ";
                cin>>amount;
                string d;
                cout<<"Enter the date yyyy-mm-dd> ";
                cin>>d;

                int year = stoi(d.substr(0,4));
                int month = stoi(d.substr(5,6));
                int day = stoi(d.substr(8,9));

                Date date(day,month,year);
                if(!(bank.make_withdrawl(amount,accNo))){
                    cout<<"Insufficient Funds available, please try again. \nYour current balance is : $"<< bank.get_account(accNo)->get_balance();
                    continue;
                }
                Transaction* transaction1 = new Transaction("WD", amount, bank.get_account(accNo)->get_balance(),date);

                bank.get_account(accNo)->add_transaction(transaction1);

                cout<<"\nWithdraw from Account "<<bank.get_account(accNo)->get_account_number()<<" amount: $"<<amount<<" on "<<date<< " New Balance : $"<<bank.get_account(accNo)->get_balance();



                // Checking for Checking Charges
                float check_charges = bank.check_Charges(accNo);
                if (check_charges!=0){
                    bank.make_withdrawl(check_charges,accNo);
                    time_t systime = time(0);
                    Date sysDate(systime);
                    Transaction* transaction = new Transaction("CHKCHG ", check_charges, bank.get_account(accNo)->get_balance(),sysDate);
                    bank.get_account(accNo)->add_transaction(transaction);
                }
        }


        else if (n==3){


            long accountNo;
            cout<<"Enter Account Number : \n";
            cin>>accountNo;
            if(bank.get_account(accountNo) == nullptr){
                continue;
            }
            bank.get_account(accountNo)->to_string();

           // cout<<"\nAccount No : " << bank.get_account(accountNo)->get_account_number();
           // cout<<"\nOwner : "<< bank.get_account(accountNo)->get_customer().get_name();
           // cout<<"\nBalance : "<< bank.balance(accountNo);
           // cout<<"\nTpye of Acc : "<<bank.get_account(accountNo)->get_customer().get_typeAcc();
           // cout<<"\nTransactions Details : \n";
           // bank.get_account(accountNo)->get_transaction();
    }
        else if (n==4){
            break;
    }
        else {
            cout<<"\nPlease choose Correct Option. \n";
        }

    }

}
