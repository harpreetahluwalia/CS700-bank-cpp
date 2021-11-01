#ifndef SENIOR_H
#define SENIOR_H

#include <Customer.h>


class Senior : public Customer
{
    public:
      //  Senior();



        Senior(string name,string address,long long telephone_number,int age);
       // Senior(string name,string address,long telephone_number,int age);

        Senior();





    //    virtual ~Senior();

    protected:

    private:
        float const SAVINGS_INTEREST = 10;
        float const CHECK_INTEREST = 5;
        float const CHECK_CHARGE = 2.5 ;
        float const OVERDRAFT_PENALTY = 25;

};

#endif // SENIOR_H
