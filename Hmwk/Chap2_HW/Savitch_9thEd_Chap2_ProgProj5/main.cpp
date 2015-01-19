/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 17, 2015, 3:28 PM
 * Purpose: HW, Fire Law Regulation
 */

#include <iostream>
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    string str;
    do
    {
    
    cout<<"This program will let you know if your "<<endl;
    cout<<"party can occupy a room and still be within "<<endl;
    cout<<"the fire law regulations regarding the maximum "<<endl;
    cout<<"room occupancy "<<endl;
    short maxppl,//maximum number of people allowed
          numppl,//number of people attending
          moreppl,//how many more people may attend
          lessppl;//how many people may not attend
    //prompt user for inputs
    cout<<"Please enter the maximum occupancy of the room: "<<endl;
    cin>>maxppl;
    cout<<"Please enter the number of people attending: "<<endl;
    cin>>numppl;
    //if more people are allowed to enter the event
    if (numppl <= maxppl)
    {
        //calculate how many more people may attend
        moreppl=maxppl-numppl;
        cout<<"You are under the maximum occupancy."<<endl;
        cout<<moreppl<<" more people may attend your event."<<endl;
        //prompt user if they wish to loop the program
        cout<<"Enter 1 to restart the program or 0 to exit."<<endl;
        cin>>str;
        cout<<endl;
    }
    //if to many people are attending the event
    else
    {
        //calculate how many people must leave
        lessppl=numppl-maxppl;
        cout<<"You are over the maximum occupancy."<<endl;
        cout<<lessppl<<" people may not attend your event due to "<<endl;
        cout<<"fire regulations. We are sorry for the inconvenience."<<endl;
        //prompt user if they wish to loop the program
        cout<<"Enter 1 to restart the program or 0 to exit."<<endl;
        cin>>str;
        cout<<endl;
    }
    }
    while(str!="0");//end loop
    
    return 0;
}