#include "Bank.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
Bank::Bank()
{
    //ctor
}



void Bank::add_account(Account* acc){
//cout<<"In add account bank : Owner "<<acc->get_customer().get_name()<<" and balance is : "<<acc->get_balance();
    array_accounts[NoOfAcc] = acc;

    //if (acc->get_flag()){
    // //   cout<<"ITS CHECKING ACCOUNT";
   // }
  //  else{
  //      cout<<"ITS SAVING";
  //  }
    cout<<"\nAccount Has Been Added! \nAccount Number : "<<acc->get_account_number();



  //  Checking_Account ch;
    //Savings_Account sv;

    //acc = dynamic_cast<Account*>(&ch);

    // Dynamic_casting






  /*  if(acc->get_flag() == 0){
        type[NoOfAcc] = "checking";
    }else{
        type[NoOfAcc] = "saving";
    }*/





    NoOfAcc += 1;
   // cout<<"add account function\n\n";
   // cout<<acc.get_customer().get_name();
}


float Bank::get_interest(long accNo){

    float interest_rate;
    float interest;


    Checking_Account* ch = dynamic_cast<Checking_Account*>(get_account(accNo));
    if (ch == nullptr){
        //Its saving account
        interest_rate = get_account(accNo)->get_customer().get_save_int();
        //cout << "null -- Not Checking" << endl;
        }
    else{
        //Its checking account
        interest_rate = get_account(accNo)->get_customer().get_check_int();
    }

    interest = get_account(accNo)->interest(interest_rate);
    return interest;

}


float Bank::check_Charges(long accNo){

    float check_charges;

    Checking_Account* ch = dynamic_cast<Checking_Account*>(get_account(accNo));
    if (ch == nullptr){
        //Its saving account
        // No checking charges on saving account.
        return 0;
       // interest_rate = get_account(accNo)->get_customer().get_save_int();
        //cout << "null -- Not Checking" << endl;
        }
    else{
        float check_charges = get_account(accNo)->get_customer().get_check_ch();
        return check_charges;
        //Its checking account
       // interest_rate = get_account(accNo)->get_customer().get_check_int();
    }

}
Account* Bank::get_account(long accNo){


    for (int i=0 ; i<NoOfAcc; i++){

        if (array_accounts[i]->get_account_number() == accNo){
         //   cout<<"ACCOUNT NUMBERRR IS :: == "<<array_accounts[i]->get_account_number();
            return array_accounts[i];

        }

    }

    cout<<"\nIncorrect Account Number! Please try again. \n";
  //  return &Account();
        return nullptr;
   // return array_accounts[0];



}

void Bank::make_deposit(float amount, long accNo){

    get_account(accNo)->deposit(amount);
    //cout<<amount<< " amount added added in acc no : "<<accNo<<" Owner : "<<get_account(accNo)->get_customer().get_name()<<" \nNEW BALANCE : "<<get_account(accNo)->get_balance();

}


bool Bank::make_withdrawl(float amount, long accNo){

        bool flag = get_account(accNo)->withdraw(amount);
        return flag;
}


float Bank::balance(long accNo){

    return get_account(accNo)->get_balance();
  //  cout<<amount<< " amount added added in acc no : "<<accNo<<" Owner : "<<get_account(accNo)->get_customer().get_name()<<" \nNEW BALANCE : "<<get_account(accNo)->get_balance();

}

Bank::~Bank()
{
    //dtor
}
