/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 *Created on January 12, 2015, 11:26 AM
 * Purpose: My car payment
 */

//system libraries
#include <iostream>//Keyboard
#include <cmath>//math function library
#include <iomanip>



using namespace std;
//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
   //declare variables
    float intRate=0.0319f/12;
    float msrplus=4e4f;//loan amount for Buick Avenir
    char nPayment=60;//number of monthly payments
    //calculate the monthly payment
    float temp=pow((1+intRate),nPayment);
    float mPay=intRate*temp*msrplus/(temp-1);
    //output the inputs
    cout<<"interest per year in percent = "<<intRate<<endl;
 //   cout<<"number of payments = "<<static_cast<int>;
    cout<<"loan amount = "<<msrplus<<endl;
    //output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    return 0;
}

