/**
 *  @file   Transaction.cpp
 *  @author Harpreet Singh
 *  @brief  It olds transaction details such as type, amount, balance ,etc.
 *  @date   29/10/2021
 ***********************************************/

#include "Transaction.h"


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
Transaction::Transaction(string t, float a, float b,Date d){
                transaction_tpye = t;
                amount = a;
                balance = b;
                date = d;
            //    temp = 0;

        }

Transaction::Transaction(){
        temp = 0;
}

/**
 * Method : to_string()
 * @author Harpreet Singh
 * @date 29-10-2021
 * @brief It prints the transaction data
*/
void Transaction::to_string(){

    cout<<"\n"<<transaction_tpye<<"\t"<<date<<"\t$"<<amount<<"\t$"<<balance<<"\n";
}

Transaction::~Transaction()
{
    //dtor
}
