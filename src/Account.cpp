/**
 *  @file   Account.cpp
 *  @author Harpreet Singh
 *  @brief  It includes Account details such as balance,account no. and customer date.
 *  @date   29/10/2021
 ***********************************************/

#include "Account.h"

Account::Account()
{
    account_number = 0;

}

long accNo = 1;


/**
 * Method : createAccount()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It creates account with customer data.
 * @param b It represents the initial balance of account
 * @param c It is Customer class object which stores customer data.
*/
void Account::createAccount(float b, Customer c){

            balance = b;
            customer = c;
            account_number = accNo;
            accNo = accNo + 1;

}


/**
 * Method : deposit()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It deposits the balance to account by setting balance data member.
 * @param amount It represents the amount of deposit
*/
void Account::deposit(float amount){

    this->balance = this->balance + amount;

}

/**
 * Method : withdraw()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It withdraws the account to account by setting balance data member. It also checks if there is sufficient balance available.
 * @param amount It represents the amount of withdrawal
*/
bool Account::withdraw(float amount){
    if (amount > balance){
        return false;
    }

    else{
        balance = balance - amount;
        return true;
    }

}


/**
 * Method : add_transaction()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It adds the transaction to transaction array.
 * @param transaction It is transaction object pointer
*/
void Account::add_transaction(Transaction* transaction){

    transactions_array[noOfTrans] = transaction;
    this->noOfTrans = this->noOfTrans + 1;
}


/**
 * Method : get_transaction()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It get the transaction from transaction array. It calls the to_string() function from transaction class to print the transaction details.
 *
*/
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


/**
 * Method : interest()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It calculates the interest for the particular account
 * @param interest It represents interest rate
 * @return It return the total Interest amount
 *
*/
float Account::interest(float interest){

    float i = balance * (interest/100);
    return i;
}


/**
 * Method : to_string()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It prints the account details including name, address, balance etc.
 *
*/
void Account::to_string(){

cout<<"\nAccount Details : \nOwner : "<<customer.get_name()<<"\nAddress : "<<customer.get_address()<<"\nAccount No. : "<<account_number<<"\nBalance : "<<balance<<"\nType of Account : "<<customer.get_typeAcc()<<"\n";
get_transaction();
}


Account::~Account()
{
    //dtor
}
