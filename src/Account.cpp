#include "Account.h"
//#include "Customer.h"

Account::Account()
{
    account_number = 0;

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
    if (amount > balance){
        return false;
    }

 //   if (this->balance >= amount){
    else{
        balance = balance - amount;
        return true;
    }

}


void Account::add_transaction(Transaction* transaction){

    transactions_array[noOfTrans] = transaction;
    this->noOfTrans = this->noOfTrans + 1;
}

void Account::get_transaction(){
        cout<<"\nTransactions Detail : \n";
        if (noOfTrans == 0){
            cout<<"\nNo transactions detail available. ";
        }
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

cout<<"\nAccount Details : \nOwner : "<<customer.get_name()<<"\nAddress : "<<customer.get_address()<<"\nAccount No. : "<<account_number<<"\nBalance : "<<balance<<"\nType of Account : "<<customer.get_typeAcc()<<"\n";
get_transaction();
}


Account::~Account()
{
    //dtor
}
