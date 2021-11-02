#ifndef SENIOR_H
#define SENIOR_H
/**
 *  @file   Senior.h
 *  @author Harpreet Singh
 *  @brief  It includes Customer type Senior details and extends customer class.
 *  @date   29/10/2021
 ***********************************************/


#include <Customer.h>


class Senior : public Customer
{
    public:

        /**
        * Method : Senior() Constructor
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief Senior constructor called when object is created and holds customer data.
        * @param name It holds the name of customer
        * @param address It holds the address of the customer.
        * @param telephone_number It holds telephone number of the customer
        * @param age It holds the age of the customer.
        */
        Senior(string name,string address,long long telephone_number,int age);
        Senior();

    protected:

    private:
        float const SAVINGS_INTEREST = 10;
        float const CHECK_INTEREST = 5;
        float const CHECK_CHARGE = 2.5 ;
        float const OVERDRAFT_PENALTY = 25;

};

#endif // SENIOR_H
