/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 14, 2015, 10:35 AM
 * Purpose: HW, Soda Death
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
//User Libraries

//Global Constants
const float GRMPND=453.6;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Assignment 2 menu
    cout<<"solution 1 Savitch 8thEd Chap 2 Prob 2"<<endl;
    cout<<"solution 1 Savitch 8thEd Chap 2 Prob 3"<<endl;
    cout<<"you get the idea"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //based upon the choice, display the results
    switch(choice)
    {
        case 1:
        {
            cout<<"you have choosen solution 1"<<endl;
            //declare variables
            const float CONC=1e-3f;//Sweetener concentration
            float wtCoke=3.5e2f;//weight of coke in grams
            float kMouse=5.0f,//quantity of sweetener that kills a mouse  
                  wtMouse=3.5e1f,//weight of mouse in grams 
                  kPer, wtDsPer;
            int nCans;
            //input the desired weight of person
            cout<<"Input your desired weight in grams"<<endl;
            cout<<"Note: grams are a mass not a weight"<<endl;
            cout<<"All people using the metric system are nuts"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            wtDsPer*=GRMPND;
            //calculation
            kPer=kMouse/wtMouse*wtDsPer;
            nCans=kPer/wtCoke/CONC;
            //Output the limit of what you can drink
            cout<<"Number of cans of diet coke that "<<endl;
            cout<<"will kill you is = "<<nCans<<endl;
            break;
        }
        case 2:
        {
            cout<<"you have choosen solution 1"<<endl;
            break;
        }
    }
    return 0;
}

