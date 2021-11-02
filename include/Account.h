#ifndef ACCOUNT_H
#define ACCOUNT_H

/**
 *  @file   Account.h
 *  @author Harpreet Singh
 *  @brief  It includes Account details such as balance,account no. and customer date.
 *  @date   29/10/2021
 ***********************************************/

#include "Customer.h"
#include "Transaction.h"
class Account
{
    public:
        Account();
        virtual ~Account();

        /**
        * Method : createAccount()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It creates account with customer data.
        * @param b It represents the initial balance of account
        * @param c It is Customer class object which stores customer data.
        */
        void createAccount(float b, Customer customer);


        /**
        * Method : to_string()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It prints the account details including name, address, balance etc.
        *
        */
        void to_string();

        /**
        * Method : add_transaction()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It adds the transaction to transaction array.
        * @param transaction It is transaction object pointer
        */
        void add_transaction(Transaction* transaction);

        /**
        * Method : get_transaction()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It get the transaction from transaction array. It calls the to_string() function from transaction class to print the transaction details.
        *
        */
        void get_transaction();



        /**
        * Method : deposit()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It deposits the balance to account by setting balance data member.
        * @param amount It represents the amount of deposit
        */
        void deposit(float amount);

        /**
        * Method : withdraw()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It withdraws the account to account by setting balance data member. It also checks if there is sufficient balance available.
        * @param amount It represents the amount of withdrawal
        */
        bool withdraw(float amount);


        /**
        * Method : interest()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It calculates the interest for the particular account
        * @param interest It represents interest rate
        * @return It return the total Interest amount
        *
        */
        float interest(float interest);

        /**
        * Method : get_balance()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns current balance
        * @return It returns the value of balance variable.
        *
        */
        float get_balance(){
            return this->balance;
        }

        /**
        * Method : get_customer()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns customer object which holds customer data.
        * @return It returns the customer class object.
        *
        */
        Customer get_customer(){
            return customer;
        }


        /**
        * Method : get_account_number()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns account number.
        * @return It returns account number.
        *
        */
        long get_account_number(){
            return account_number;
        }

        /**
        * Method : set_customer()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It sets the customer object value to customer variable.
        * @param c Customer class object
        *
        */
        void set_customer(Customer c){
            customer = c;
        }


        /**
        * Method : set_balance()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It sets the balance of account.
        * @param b amount to set the balance
        *
        */
        void set_balance(float b){
            balance = b;
        }
        virtual int get_flag(){}

    protected:
        float balance;
        long account_number;
        Customer customer;
        int noOfTrans = 0;
        Transaction *transactions_array[10];

    private:

};

#endif // ACCOUNT_H
