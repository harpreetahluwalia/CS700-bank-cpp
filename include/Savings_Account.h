#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
/**
 *  @file   Saving_Account.h
 *  @author Harpreet Singh
 *  @brief  It includes Saving Account objects.
 *  @date   29/10/2021
 ***********************************************/
#include <Account.h>

class Savings_Account : public Account
{
    public:
       // Savings_Account();

        Savings_Account();
        virtual ~Savings_Account();


    protected:
    private:
};

#endif // SAVINGS_ACCOUNT_H
