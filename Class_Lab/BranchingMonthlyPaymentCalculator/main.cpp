/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 14, 2015, 11:19 AM
 * Purpose: HW, 
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declare variables.
    unsigned short n;//number of months
    float i, //interest rate percent per year
            t,//temp variable
            l,//loan amount $'s
            mp;//monthly payment $'s
    //input variables required
    cout<<"what is the interest rate in percent per year"<<endl;
    cin>>i;
    i/=(100*12);//convert to decimal
    cout<<"what is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"number of monthly payments (format integer)"<<endl;
    cin>>n;
    //calculate the monthly payment
    if(i<=0)
    {
        mp=1/n;
    }
    else
    {
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
    }
    cout<<"cout your monthly payment = $"<<mp<<endl;
    //exit stage right!
    return 0;
}

