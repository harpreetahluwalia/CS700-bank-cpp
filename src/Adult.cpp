/**
 *  @file   Adult.cpp
 *  @author Harpreet Singh
 *  @brief  It includes Customer type Adult details and extends customer class.
 *  @date   29/10/2021
 ***********************************************/

#include "Adult.h"


        /**
        * Method : Adult() Constructor
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief Adult constructor called when object is created and holds customer data. It also assign constant values to customer class variables.
        * @param name It holds the name of customer
        * @param address It holds the address of the customer.
        * @param telephone_number It holds telephone number of the customer
        * @param age It holds the age of the customer.
        */

Adult::Adult(string name,string address,long long telephone_number,int age):Customer(name,address,telephone_number,age)
{
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

