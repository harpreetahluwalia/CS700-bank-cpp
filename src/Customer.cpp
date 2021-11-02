/**
 *  @file   Customer.h
 *  @author Harpreet Singh
 *  @brief  It Customer data such as customer name, address, phone number etc.
 *  @date   29/10/2021
 ***********************************************/

#include "Customer.h"
//#include "Account.h"

        /**
        * Method : Customer() Constructor
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief Customer constructor called when object is created and holds customer data.
        * @param n It holds the name of customer
        * @param a It holds the address of the customer.
        * @param t It holds telephone number of the customer
        * @param x It holds the age of the customer.
        */
Customer::Customer(string n,string a,long long t, int x)
{
            name = n;
            address = a;
            telephone_number = t;
            age = x;
}

Customer::Customer()
{

}


//Customer::~Customer()
//{
    //dtor
//}
