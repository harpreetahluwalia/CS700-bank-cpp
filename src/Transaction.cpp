#include "Transaction.h"

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


void Transaction::to_string(){

    cout<<"\n"<<transaction_tpye<<"\t"<<date<<"\t$"<<amount<<"\t$"<<balance<<"\n";
}

Transaction::~Transaction()
{
    //dtor
}
