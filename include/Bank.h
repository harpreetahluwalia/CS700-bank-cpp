#ifndef BANK_H
#define BANK_H
/**
 *  @file   Bank.h
 *  @author Harpreet Singh
 *  @brief  It includes data of all the accounts and all the customers.
 *  @date   29/10/2021
 ***********************************************/
#include "Account.h"
class Bank
{
    public:
        Bank();
        virtual ~Bank();

        /**
        * Method : add_account()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It adds the account to Accounts array.
        * @param Acc It represents the class Array object pointer
        */
        void add_account(Account* acc);



        /**
        * Method : make_deposit()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It deposits the amount to the account
        * @param amount It represents the amount to deposit
        * @param accNo It represents the account number
        */
        void make_deposit(float amount, long accNo);


        /**
        * Method : make_withdrawl()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It withdraws the amount from the the account and also returns bool value if withdraw was successful
        * @param amount It represents the amount to deposit
        * @param accNo It represents the account number
        */
        bool make_withdrawl(float amount, long accNo);



        /**
        * Method : balance()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It is used to fetch the balance of the account
        * @param accNo It represents the account number
        */
        float balance(long accNo);

        /**
        * Method : check_Charges()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns the total check charges amount based on the type of account
        * @param accNo It represents the account number
        */
        float check_Charges(long accNo);

        /**
        * Method : get_interest()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns the total interest amount based on the type of account
        * @param accNo It represents the account number
        */
        float get_interest(long accNo);


        /**
        * Method : get_account()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns Account class object based on account number
        * @param accNo It represents the account number
        */
        Account* get_account(long accNo);


    protected:
        Account *array_accounts[15]; //array_accounts[15];
        int NoOfAcc = 0;

    private:
        string type[15];
};

#endif // BANK_H
