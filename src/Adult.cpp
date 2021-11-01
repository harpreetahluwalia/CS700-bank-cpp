#include "Adult.h"

Adult::Adult(string name,string address,long telephone_number,int age):Customer(name,address,telephone_number,age)
{
 //           Customer(name,address,telephone_number,age);

        save_int=SAVINGS_INTEREST;
        check_int=CHECK_INTEREST;
        check_ch=CHECK_CHARGE;
        o_penalty=OVERDRAFT_PENALTY;
        typeAcc = "Adult";
}





Adult::Adult()
{
    //ctor
}

