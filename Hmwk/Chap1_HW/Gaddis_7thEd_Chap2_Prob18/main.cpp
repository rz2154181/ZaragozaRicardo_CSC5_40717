/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 8, 2015
 * Purpose: Hmwk, Energy Drink Problem
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    short custSrv=12467;//Customers Surveyed
    char perEDrk=14;//Percent energy drinkers
    char perCDrk=64;//Percent citrus drinkers
    
    //Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drink
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
    //output the results
    cout<<"Customers surveyed that are Energy Drinkers = "<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers = "<<custC<<endl;
    //Exit Stage Right!
    
    return 0;
}

