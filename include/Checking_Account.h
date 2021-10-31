#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include <Account.h>


class Checking_Account : public Account
{
    public:
        Checking_Account();



      //  virtual ~Checking_Account();




        void deposit();
        void withdraw();
        void add_interest();

        int get_flag(){
            return this->flag;
        }

    protected:
    private:
        int flag = 0;
};

#endif // CHECKING_ACCOUNT_H
