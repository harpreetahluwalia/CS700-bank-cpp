#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include <Account.h>


class Savings_Account : public Account
{
    public:
       // Savings_Account();

        Savings_Account();
        virtual ~Savings_Account();


        void deposit();
        void withdraw();
        void add_interest();
        int get_flag(){
            return this->flag;
        }
    protected:
    private:
        int flag = 1;
};

#endif // SAVINGS_ACCOUNT_H
