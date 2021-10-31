#ifndef STUDENT_H
#define STUDENT_H

#include <Customer.h>


class Student : public Customer
{
    public:



        Student(string name,string address,long telephone_number,int age);


        Student();
       // virtual ~Student();

    protected:

    private:


        float const SAVINGS_INTEREST = 8;
        float const CHECK_INTEREST = 4;
        float const CHECK_CHARGE = 75 ;
        float const OVERDRAFT_PENALTY = 35;

};

#endif // STUDENT_H
