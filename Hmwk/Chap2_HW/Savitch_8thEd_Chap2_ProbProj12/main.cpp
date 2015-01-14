/*
* File: main.cpp
* Author: Ricardo Zaragoza
* Created on January 13, 2015, 10:15 AM
* Purpose: Babylonian Square root calculator
*/
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
        //Declare variables
        float number,guess,r;
        //Input a number
        cout<<"Input a number to estimate it's square root"<<endl;
        cout<<"The format fill be a positive float"<<endl;
        cin>>number;
        //First pass
        guess=number/2;
        r=number/guess;
        guess=(guess+r)/2;
       //Output the first pass
        cout<<"First Pass calculate -> "<<guess<<endl;
        //Second pass
        r=number/guess;
        guess=(guess+r)/2;
        //Output the second pass
        cout<<"Second Pass calculate -> "<<guess<<endl;
        //Third pass
        r=number/guess;
        guess=(guess+r)/2;
        //Output the third pass
        cout<<"Third Pass calculate -> "<<guess<<endl;
        //Fourth pass
        r=number/guess;
        guess=(guess+r)/2;
        //Output the fourth pass
        cout<<"Fourth Pass calculate -> "<<guess<<endl;
        cout<<endl;

        cout<<"Now re-enter the same number to get the "<<endl;
        cout<<"most accurate result by using the square "<<endl;
        cout<<"root function"<<endl;
        float x,y;
        cin>>x;
        y=sqrt(x) ;
        cout<<"The square root of "<< x<< " = "<<y<<endl;

return 0;
}

