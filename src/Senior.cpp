/**
 *  @file   Senior.cpp
 *  @author Harpreet Singh
 *  @brief  It includes Customer type Senior details and extends customer class.
 *  @date   29/10/2021
 ***********************************************/

#include "Senior.h"

        /**
        * Method : Senior() Constructor
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief Senior constructor called when object is created and holds customer data. It also assign constant values to customer class variables.
        * @param name It holds the name of customer
        * @param address It holds the address of the customer.
        * @param telephone_number It holds telephone number of the customer
        * @param age It holds the age of the customer.
        */
Senior::Senior(string name,string address,long long telephone_number,int age):Customer(name,address,telephone_number,age){

        save_int=SAVINGS_INTEREST;
        check_int=CHECK_INTEREST;
        check_ch=CHECK_CHARGE;
        o_penalty=OVERDRAFT_PENALTY;

        typeAcc = "Senior";

}

//Senior::Senior()


Senior::Senior()
{
    //ctor
}

