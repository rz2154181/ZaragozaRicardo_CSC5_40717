/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 6, 2015, 10:10 AM
 * Purpose: Hmwk, Copy Display 1.8 Modification 2
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
{
     //Initialize variables
    short number_of_pods,//number of pods
        peas_per_pod,//number of peas per pod
        total_peas;//total number of peas
    cout << "Hello\n";
    //prompt user for input
    //Prompt user for input
    cout << "press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;// enter number of pods
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;//enter number of peas per pod
    //calculate total number of peas
    total_peas=number_of_pods / peas_per_pod;// Change to division
   //display the finall output
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods\n";
    cout << "Good-bye\n";
    return 0;
}
