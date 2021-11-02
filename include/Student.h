#ifndef STUDENT_H
#define STUDENT_H
/**
 *  @file   Student.h
 *  @author Harpreet Singh
 *  @brief  It includes Customer type Student details and extends customer class.
 *  @date   29/10/2021
 ***********************************************/

#include <Customer.h>


class Student : public Customer
{
    public:
        /**
        * Method : Student() Constructor
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief Student constructor called when object is created and holds customer data.
        * @param name It holds the name of customer
        * @param address It holds the address of the customer.
        * @param telephone_number It holds telephone number of the customer
        * @param age It holds the age of the customer.
        */
        Student(string name,string address,long long telephone_number,int age);

        Student();

    protected:

    private:

        float const SAVINGS_INTEREST = 8;
        float const CHECK_INTEREST = 4;
        float const CHECK_CHARGE = 3.5 ;
        float const OVERDRAFT_PENALTY = 35;

};

#endif // STUDENT_H
