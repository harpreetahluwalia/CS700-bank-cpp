#ifndef ADULT_H
#define ADULT_H

#include "Customer.h"


class Adult : public Customer
{
    public:
        Adult(string name,string address,long telephone_number,int age);



        Adult();


      //  virtual ~Adult();


     float const &get_interest()
    {
            return CHECK_INTEREST;
        }



    protected:

        float const SAVINGS_INTEREST = 5;
        float const CHECK_INTEREST = 3;
        float const CHECK_CHARGE = 100 ;
        float const OVERDRAFT_PENALTY = 50;


    private:




};

#endif // ADULT_H
