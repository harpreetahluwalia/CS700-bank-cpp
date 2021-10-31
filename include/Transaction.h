#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include "Date.h"
using namespace std;

class Transaction
{
    public:
        Transaction(string t, float a, float b,Date d);
        Transaction();

        virtual ~Transaction();
        void set_temp(){
            temp = 1;
        }
        int temp;

        void to_string();

    protected:

    private:

        string transaction_tpye;

        float amount;
        float balance;
        Date date;
        //int temp;


};

#endif // TRANSACTION_H
