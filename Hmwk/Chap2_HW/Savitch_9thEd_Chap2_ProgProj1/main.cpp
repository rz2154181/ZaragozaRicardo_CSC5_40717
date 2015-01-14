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
    float sodapop=350, //mass of a can of soda
            wgtdiet, //weight the dieter will stop at
            lethal=5.0f/35,//lethal dose
            grmswt,//grams of sweetener allowed
            grmsoda;//grams of soda allowed
    
    float grmdiet; //desired weight in grams
    const float perSoda=1.0f/10;//percent of sweetener in soda
    const float grmpnd=454.0f/1;//conversion gram to pound
    cout<<"This program will tell you how much diet"<<endl;
    cout<<"soda you can drink without dying."<<endl;
    cout<<"Please enter your weight goal in pounds: "<<endl;
    cin>>wgtdiet;
    grmdiet=wgtdiet*grmpnd;
    cout<<"weight in grams "<<grmdiet<<endl;
   
    grmswt=grmdiet*lethal/sodapop*perSoda;
    grmsoda=grmswt/3.5f;
    cout<<"you can drink "<<grmsoda<<endl;
    
   
    
    return 0;
}