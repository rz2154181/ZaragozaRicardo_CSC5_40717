/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 6, 2015, 10:10 AM
 * Purpose: Hmwk, Compute cents
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(void) 
{
   //Declare Variables
    short quart; //Quarters
    short nicl; //Nickels
    short dime; //Dimes
    int total;
    
    //Prompt user for input
    cout<<"This program will calculate your"<<endl;
    cout<<"quarters, nickels, and dimes"<<endl;
    cout<<"Please input the number of quarters"<<endl;
    cin>>quart;
    cout<<"Please input the number of nickels"<<endl;
    cin>>nicl;
    cout<<"Please input the number of dimes"<<endl;
    cin>>dime;
    
    total=25*quart+10*nicl+5*dime;
            
    cout<<"The coins are worth "<<total<<" cents"<<endl;
    return 0;
}
