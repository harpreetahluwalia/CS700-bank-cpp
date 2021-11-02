#ifndef TRANSACTION_H
#define TRANSACTION_H
/**
 *  @file   Transaction.h
 *  @author Harpreet Singh
 *  @brief  It olds transaction details such as type, amount, balance ,etc.
 *  @date   29/10/2021
 ***********************************************/
#include <iostream>
#include "Date.h"
using namespace std;

class Transaction
{
    public:

        /**
        * Method : Transaction() constructor
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It creates transaction object.
        * @param t Type of the transaction
        * @param a amount of the transaction
        * @param b balance after the transaction
        * @param d Date of the transaction.
        */
        Transaction(string t, float a, float b,Date d);
        Transaction();

        virtual ~Transaction();
        void set_temp(){
            temp = 1;
        }
        int temp;

        /**
        * Method : to_string()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It prints the transaction data
        */
        void to_string();

    protected:

    private:

        string transaction_tpye;

        float amount;
        float balance;
        Date date;

};

#endif // TRANSACTION_H
