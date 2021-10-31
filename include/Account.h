#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Customer.h"
#include "Transaction.h"
class Account
{


    public:
        Account();




        virtual ~Account();

        void createAccount(float b, Customer customer);

        void to_string();


        void add_transaction(Transaction* transaction);

        void get_transaction();

        long get_account_number(){
            return account_number;
        }

        void deposit(float amount);
        bool withdraw(float amount);
        float interest(float interest);

        float get_balance(){
            return this->balance;
        }

        Customer get_customer(){
            return customer;
        }

        void set_customer(Customer c){
            customer = c;
        }

        void set_balance(float b){
            balance = b;
        }




        virtual int get_flag(){}

    protected:
        float balance;
        long account_number;
        Customer customer;
        int noOfTrans = 0;
//        static int t = 0;
        Transaction *transactions_array[10];


    private:


};

#endif // ACCOUNT_H
