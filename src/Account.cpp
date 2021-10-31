#include "Account.h"
//#include "Customer.h"

Account::Account()
{
    //ctor
    account_number = 0;


 //   for (int i=0; i<sizeof(transactions_array); i++){

   //     transactions_array[i] = new Transaction();
   // }
}

long accNo = 1;
void Account::createAccount(float b, Customer c){

            balance = b;
            customer = c;
            account_number = accNo;
            accNo = accNo + 1;


}

void Account::deposit(float amount){

    this->balance = this->balance + amount;

}



bool Account::withdraw(float amount){

    if (this->balance >= amount){
    this->balance = this->balance - amount;
}
    else
        return false;

}


void Account::add_transaction(Transaction* transaction){

    transactions_array[noOfTrans] = transaction;
  //  transaction->set_temp();
    this->noOfTrans = this->noOfTrans + 1;
  //  this->t = this->t + 1;
}

void Account::get_transaction(){

        for (int i=0 ; i<noOfTrans; i++){

            if(transactions_array[i] != nullptr){
                transactions_array[i]->to_string();
            }
            else{
                break;
            }

        }

}

float Account::interest(float interest){

    float i = balance * (interest/100);
    return i;

}



void Account::to_string(){

}


Account::~Account()
{
    //dtor
}
