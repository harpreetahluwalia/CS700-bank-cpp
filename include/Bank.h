#ifndef BANK_H
#define BANK_H

#include "Account.h"
class Bank
{
    public:
        Bank();
        virtual ~Bank();

        void add_account(Account* acc);

        void make_deposit(float amount, long accNo);

        bool make_withdrawl(float amount, long accNo);

        float balance(long accNo);

        float get_interest(long accNo);

        Account* get_account(long accNo);


    protected:
        Account *array_accounts[15]; //array_accounts[15];
        int NoOfAcc = 0;

    private:
        string type[15];
};

#endif // BANK_H
