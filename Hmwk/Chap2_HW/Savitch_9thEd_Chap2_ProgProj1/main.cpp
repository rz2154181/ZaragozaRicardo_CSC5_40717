/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 8, 2015, 10:28 AM
 * Purpose: HW, Soda Death
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //define variables
    unsigned int sodapop=350, //mass of a can of soda
            wgtdiet, //weight the dieter will stop at
            lethal=5.0f/35,//lethal dose
            grmsoda;//grams of soda allowed
    unsigned int grmdiet; //desired weight in grams
    const short perSoda=1.0f/10;//percent of sweetener in soda
    const short grmpnd=45400.0f/100;//conversion gram to pound
    cout<<"This program will tell you how much diet"<<endl;
    cout<<"soda you can drink without dying."<<endl;
    cout<<"Please enter your weight goal in pounds: "<<endl;
    cin>>wgtdiet;
    grmdiet=wgtdiet*grmpnd;
    cout<<"weight in grams "<<grmdiet<<endl;
   
    grmsoda=grmdiet*lethal/sodapop*perSoda;
    cout<<"you can drink "<<grmsoda<<endl;
    
   
    
    return 0;
}

