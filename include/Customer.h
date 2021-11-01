#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

using namespace std;



class Customer
{
    public:
        Customer(string n,string a,long long t, int x);
        Customer();
     //   virtual ~Customer();

        string get_name(){
            return name;
        }


        string get_address(){
            return address;
        }

        int get_telephone_number(){
            return telephone_number;
        }

        int get_Age(){
            return age;
        }

        int get_customer_number(){
            return customer_number;
        }


        void set_name(string n){
            name = n;
        }

        void set_address(string a){
            address = a;
        }

        void set_age(int x){
            age = x;
        }

        void set_telephone_number(long t){
            telephone_number = t;
        }

        void set_customer_number(int c){
            customer_number = c;
        }

        float get_save_int(){

            return save_int;
        }

        float get_check_int(){

            return check_int;
        }

        float get_check_ch(){

            return check_ch;
        }

        float get_o_penalty(){

            return o_penalty;
        }


        virtual float const &get_interest(){};

        string get_typeAcc(){
            return typeAcc;

        }

    protected:
        float save_int;
        float check_int;
        float check_ch ;
        float o_penalty;
        string typeAcc;


    private:



        string name;
        string address;
        long long telephone_number;
        int age;
        int customer_number;
};

#endif // CUSTOMER_H
