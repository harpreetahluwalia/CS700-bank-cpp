#ifndef ADULT_H
#define ADULT_H
/**
 *  @file   Adult.h
 *  @author Harpreet Singh
 *  @brief  It includes Customer type Adult details and extends customer class.
 *  @date   29/10/2021
 ***********************************************/

#include "Customer.h"


class Adult : public Customer
{
    public:

        /**
        * Method : Adult() Constructor
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief Adult constructor called when object is created and holds customer data.
        * @param name It holds the name of customer
        * @param address It holds the address of the customer.
        * @param telephone_number It holds telephone number of the customer
        * @param age It holds the age of the customer.
        */
        Adult(string name,string address,long long telephone_number,int age);
        Adult();

    protected:

        float const SAVINGS_INTEREST = 5;
        float const CHECK_INTEREST = 3;
        float const CHECK_CHARGE = 5 ;
        float const OVERDRAFT_PENALTY = 50;


    private:




};

#endif // ADULT_H
