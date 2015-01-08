/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 6, 2015, 10:10 AM
 * Purpose: Hmwk, Solution to free fall problem
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=32.174;//ft/sec^2

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float time;//(secs)
    float dist;//distance (ft)
    //Prompt user for input
    cout<<"This program calculates free fall"<<endl;
    cout<<"Distance dropped in feet with an"<<endl;
    cout<<"Object starting at rest."<<endl;
    cout<<"Input the free-fall time to drop in seconds."<<endl;
    cout<<"The time input is a positive integer."<<endl;
    cin>>time;
    //Calculate the distance dropped
    //dist=1.0f/2*GRAVITY*time*time;
    //dist=1/2.0f*GRAVITY*time*time;
    //dist=0.5f*GRAVITY*time*time;
    //dist=5e-1f*GRAVITY*time*time;
    dist=GRAVITY*time*time/2;
    //output the results
    cout<<"Distance dropped = "<<dist<<" (ft)"<<endl;
    return 0;
}

