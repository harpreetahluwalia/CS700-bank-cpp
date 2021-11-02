
/**
 *  @file   Bank.cpp
 *  @author Harpreet Singh
 *  @brief  It includes data of all the accounts and all the customers.
 *  @date   29/10/2021
 ***********************************************/

#include "Bank.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
Bank::Bank()
{
    //ctor
}



/**
 * Method : add_account()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It adds the account to Accounts array.
 * @param Acc It represents the class Array object pointer
*/
void Bank::add_account(Account* acc){
    array_accounts[NoOfAcc] = acc;
    cout<<"\nAccount Has Been Added! \nAccount Number : "<<acc->get_account_number();
    NoOfAcc += 1;
}


/**
 * Method : get_interest()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It returns the total interest amount based on the type of account
 * @param accNo It represents the account number
*/
float Bank::get_interest(long accNo){

    float interest_rate;
    float interest;
    // using dynamic cast to check type of account
    Checking_Account* ch = dynamic_cast<Checking_Account*>(get_account(accNo));
    if (ch == nullptr){
        //Its saving account
        interest_rate = get_account(accNo)->get_customer().get_save_int();
        }
    else{
        //Its checking account
        interest_rate = get_account(accNo)->get_customer().get_check_int();
    }
    interest = get_account(accNo)->interest(interest_rate);
    return interest;
}

/**
 * Method : check_Charges()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It returns the total check charges amount based on the type of account
 * @param accNo It represents the account number
*/
float Bank::check_Charges(long accNo){

    float check_charges;
    // using dynamic cast to check type of account
    Checking_Account* ch = dynamic_cast<Checking_Account*>(get_account(accNo));
    if (ch == nullptr){
        //Its saving account
        return 0;
    }
    else{
        float check_charges = get_account(accNo)->get_customer().get_check_ch();
        return check_charges;
        //Its checking account
    }
}


/**
 * Method : get_account()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It returns Account class object based on account number
 * @param accNo It represents the account number
*/
Account* Bank::get_account(long accNo){

    for (int i=0 ; i<NoOfAcc; i++){

        if (array_accounts[i]->get_account_number() == accNo){
            return array_accounts[i];
        }
    }
    cout<<"\nIncorrect Account Number! Please try again. \n";
        return nullptr;
}


/**
 * Method : make_deposit()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It deposits the amount to the account
 * @param amount It represents the amount to deposit
 * @param accNo It represents the account number
*/
void Bank::make_deposit(float amount, long accNo){

    get_account(accNo)->deposit(amount);
}


/**
 * Method : make_withdrawl()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It withdraws the amount from the the account and also returns bool value if withdraw was successful
 * @param amount It represents the amount to deposit
 * @param accNo It represents the account number
*/
bool Bank::make_withdrawl(float amount, long accNo){

        bool flag = get_account(accNo)->withdraw(amount);
        return flag;
}


/**
 * Method : balance()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It is used to fetch the balance of the account
 * @param accNo It represents the account number
*/
float Bank::balance(long accNo){

    return get_account(accNo)->get_balance();
}

Bank::~Bank()
{
    //dtor
}
