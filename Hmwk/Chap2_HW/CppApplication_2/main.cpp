/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2015, 8:36 AM
 */

#include <iostream>

//Global Constants
using namespace std;

const float GRAVITY=32.174;//ft/sec^2

int main(void) 
{
    int y;
    cout<<"Please enter the problem number you"<<endl;
    cout<<"would like to view"<<endl;
    cin>>y;
    if (y==1)
    {  
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
    }
    else
    {
        char X;
        int years;
        cout<<"This program will display a capital C"<<endl;
        cout<<"in any character that you choose."<<endl;
        cout<<"Enter any character "<<endl;
        cin>>X;
        cout<<""<<endl;
        cout<< "  " << X << X << X << X <<endl;
        cout<< " " << X <<"    "<< X <<endl;
        cout<< X <<endl;
        cout<< X <<endl;
        cout<< X <<endl;
        cout<< X <<endl;
        cout<< X <<endl;
        cout<< " " << X << "    "  << X <<endl;
        cout<< "  "<< X << X << X << X <<endl;
        
    }   
    return 0;
}