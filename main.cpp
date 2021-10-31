#include <iostream>

using namespace std;

#include <typeinfo>
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
 //   cout << "Hello world!" << endl;
  //  return 0;

    int n = 0;
    Bank bank;
    while (n!=4){


        cout<< "\nSelect: \n0: Add Account\n1: Make Deposit\n2: Make Withdrawal\n3: Check Account\n4: Exit \n";
        cin>>n;
        if (n==0){
            string name;
            string address;
            int age;
            long telephone_number;
                cout << "Enter Customer Name : ";
                cin>>name;

                cout<< "Enter Customer Address : ";
                cin >> address;

                cout<< "Enter Customer Age : ";
                cin >> age;

                cout << "Enter Customer Phone Number : ";
                cin >> telephone_number;

              //  Customer customer(name, address, telephone_number, age);

                int temp1;
                int temp2;
                cout<<"\nSelect : \n0: Senior\n1: Adult\n2: Student\n";
                cin>>temp1;
                cout<<"\nSelect:\n0: Checking\n1: Savings\n";
                cin>>temp2;
            // / //  string c_type;
             //   string a_type;
                float balance = 0.0;

                if (temp2 == 0){

                    if (temp1 == 0){
                       // c_type = "senior";

                        Senior senior(name, address, telephone_number,age);

                     //   cout<<"Senior " <<senior.get_Age();
                     //   cout<<"\nName : "<<senior.get_name();
                        Account* checking_account = new Checking_Account;
                       // Checking_Account checking_account;
                        checking_account->createAccount(balance,senior);
                        bank.add_account(checking_account);
                     //   cout<<"name --> "<<checking_account.get_customer().get_name();
                     //   cout<<"\nage --> "<<checking_account.get_customer().get_Age();
                     //   cout<<"\nAddress"<<checking_account.get_customer().get_address();
                     //   cout<<"\nTelephone"<<checking_account.get_customer().get_telephone_number();


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



             //  cout<<"\n\nGGGGGGG  -----> "<< bank.get_account(123).get_customer().get_Age();




              //  else {





        }


        else if (n==1){
                long accNo;
                cout<<"Enter the Account Number : ";
                cin>>accNo;

               // Account()
                if(bank.get_account(accNo) == nullptr){
                    continue;
                }


            //    Account account = bank.get_account(accNo);

                float amount;
                cout<<"Enter Amount : ";
                cin>>amount;
                string d;
                cout<<"Enter the date yyyy-mm-dd> ";
                cin>>d;


                int year = stoi(d.substr(0,4));
             //   cout<<"Year : "<<year;
                int month = stoi(d.substr(5,6));
                        //        cout<<"month : "<<month;

                int day = stoi(d.substr(8,9));
                         //       cout<<"day : "<<day;


                Date date(day,month,year);
               // Date date2(30,03,1999);

               // if (date<date2) {
               //     cout<<"YES";
               // }
           //     cout<<"DATE ISS : ";
               // account.deposit(amount);
               // account.set_balance(amount+25);
                bank.make_deposit(amount, accNo);
                Transaction* transaction = new Transaction("DEP", amount, bank.get_account(accNo)->get_balance(),date);


                bank.get_account(accNo)->add_transaction(transaction);
                cout<<"Deposit in "<<accNo<<" , Amount : "<<amount<<" on "<<date<<" , New balance : $"<<bank.get_account(accNo)->get_balance();



                // Adding interest if required
                 time_t systime = time(0);
                Date sysDate(systime);
                int diff_in_days = sysDate-date;
              // cout<<i<<" Date Difference;;;";

                float months = (diff_in_days/30);
                float total_interest = bank.get_interest(accNo);
                bank.make_deposit(total_interest,accNo);
                cout<<"\nIt is "<<diff_in_days<<" days old Deposit. Thus Interest $"<<total_interest<<" is credited to the account";

                Transaction* interest_transaction = new Transaction("INT CR", total_interest, bank.get_account(accNo)->get_balance(),sysDate);
                bank.get_account(accNo)->add_transaction(interest_transaction);

             //  if ((sysDate - date) >= 30 && (sysDate - date)
              //  for (int i =0 ; sizeof(i<bank.get_account(accNo).transactions_array); i++){

                //    if (bank.get_account(accNo).transactions_array[i].date > sysDate){

                  //  }






              //  cout<<bank.get_account(accNo)->get_customer().get_savings_interest()<<"<---- INTEREST ISSS";
        //    Account* b = new
       //     Base* basepointer = new Derived;
       ///     static_cast<Derived*>(basepointer)->derived_int;

     //   string s = typeid(bank.get_account(accNo)).name();
      //  cout<<"OBJECG : "<<s;
         //       cout<<bank.get_account(accNo)->get_customer().get_penalty()<<" PENALTY ";

          //     if(bank.get_account(accNo) instanceof )
         //       cout<<bank.get_account(accNo)->get_customer().get_interest()<<"<--- Interest Rate ";




         //       Customer* c = new Savings_Account;




              // bank.get_account().get_customer().get
                //Deposit in 0 amount: $2000.00 on 2018-10-10 new balance: $2000.00

        }

        else if (n==2){
                long accNo;
                cout<<"Enter the Account Number : ";
                cin>>accNo;
                if(bank.get_account(accNo) == nullptr){
                    continue;
                }
            //    Account account = bank.get_account(accNo);

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
                //;
                if(!(bank.make_withdrawl(amount,accNo))){
                    cout<<"Insufficient Funds available, please try again. \nYour current balance is : "<< bank.get_account(accNo)->get_balance();
                    continue;
                }
                Transaction* transaction1 = new Transaction("WD", amount, bank.get_account(accNo)->get_balance(),date);

                bank.get_account(accNo)->add_transaction(transaction1);

                cout<<"\nWithdraw from Account "<<bank.get_account(accNo)->get_account_number()<<" amount: "<<amount<<" on "<<date<< " New Balance : "<<bank.get_account(accNo)->get_balance();
              //  account.withdraw(amount);
             // Withdraw from 1 amount: 100.00 on 2020-10-10 new balance: 409.98


               // cout<<"Withdraw from "<<accNo<<" , Amount : "<<amount<<" on "<<date<<" , New balance : $"<account.get_balance;
             //   cout<<"Withdraw from "<<accNo<<" , Amount : "<<amount<<" on "<<date<<" , New balance : $"<<account.get_balance();



        }


        else if (n==3){


            long accountNo;
            cout<<"Enter Account Number : \n";
            cin>>accountNo;
        if(bank.get_account(accountNo) == nullptr){
                    continue;
                }
            float balance;
            balance = bank.balance(accountNo);
          //  Account* account = bank.get_account(accountNo);
//            ban

          //  if (account.get_account_number() != 0){
                cout<<"\nAccount No : " << bank.get_account(accountNo)->get_account_number();
                cout<<"\nOwner : "<< bank.get_account(accountNo)->get_customer().get_name();
           // cout<<"Type of Account : "<<
                cout<<"\nBalance : "<< balance;
            cout<<"\nTransactions Details : \n";
            bank.get_account(accountNo)->get_transaction();

          //  }else{

            //    cout<<"\nWrong account number, please try again. ";
           //     continue;
           // }

      //  }*/
    }
        else if (n==4){


            break;

        }
        else {
            cout<<"\nPlease choose Correct Option. \n";
        }




    }






}
