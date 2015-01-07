/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 7, 2015, 11:17 AM
 * Purpose: How easy computers can make mistakes
 */

//System Libraries
#include <iostream>

//User Libraries
using namespace std;

//Global Functions

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare 3 Variables
    float a, b, c;
    //Prompt for a and b
    cout<<"Input 2 float values"<<endl;
    cin>>a>>b;
    //Sum the values
    c=a+b;
    //Output the values
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    //Exit stage right!
    return 0;
}

