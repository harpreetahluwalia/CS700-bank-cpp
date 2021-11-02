#ifndef CUSTOMER_H
#define CUSTOMER_H

/**
 *  @file   Customer.h
 *  @author Harpreet Singh
 *  @brief  It Customer data such as customer name, address, phone number etc.
 *  @date   29/10/2021
 ***********************************************/

#include <iostream>
using namespace std;



class Customer
{
    public:

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

        Customer(string n,string a,long long t, int x);
        Customer();
     //   virtual ~Customer();


        /**
        * Method : get_name()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns customer name.
        * @return It returns customer name.
        *
        */
        string get_name(){
            return name;
        }

        /**
        * Method : get_address()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns customer address.
        * @return It returns customer address.
        *
        */
        string get_address(){
            return address;
        }

        /**
        * Method : get_telephone_number()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns customer telephone_number.
        * @return It returns customer telephone_number.
        *
        */
        int get_telephone_number(){
            return telephone_number;
        }

        /**
        * Method : get_Age()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns customer age.
        * @return It returns customer age.
        *
        */
        int get_Age(){
            return age;
        }


        /**
        * Method : get_customer_number()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It returns customer_number.
        * @return It returns customer_number.
        *
        */
        int get_customer_number(){
            return customer_number;
        }

        /**
        * Method : set_name()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It sets customer name to class member variable..
        * @param n String representing name.
        *
        */
        void set_name(string n){
            name = n;
        }

        /**
        * Method : set_address()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It sets customer address to class member variable..
        * @param a String representing address.
        *
        */
        void set_address(string a){
            address = a;
        }


        /**
        * Method : set_age()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It sets customer age to class member variable..
        * @param x Int representing age.
        *
        */
        void set_age(int x){
            age = x;
        }

        /**
        * Method : set_telephone_number()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It sets customer telephone_number to class member variable..
        * @param t Long variable representing telephone_number.
        *
        */
        void set_telephone_number(long long t){
            telephone_number = t;
        }


        // Getters for the interest values

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

        /**
        * Method : set_customer_number()
        * @author Harpreet Singh
        * @date 29-10-2021
        * @brief It sets customer set_customer_number to class member variable..
        * @param c int variable representing set_customer_number.
        *
        */
        void set_customer_number(int c){
            customer_number = c;
        }
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
