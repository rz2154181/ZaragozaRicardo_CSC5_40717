/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 12, 2015, 10:07 AM
 * Purpose: Illustrate file i/o and random numbers
 */

//system libraries
#include <cstdlib>//Random rand(),srand()
#include <iostream>//Keyboard
#include <fstream>
#include <ctime>
using namespace std;

//User libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) 
{
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare a fie object
    ofstream output;
    //open the file
    output.open("RollTheDice.dat");
    //declare 5 dice
    unsigned short die1, die2, die3, die4, die5;
    //set the values for each dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    //output the results
    cout<<"yahtzee first roll => ";
    cout<<die1<<" "<<die2<<" "<<die3;
    cout<<" "<<die4<<" "<<die5<<endl;
    //output
    output<<"yahtzee first roll => ";
    output<<die1<<" "<<die2<<" "<<die3;
    output<<" "<<die4<<" "<<die5<<endl;
    //close the stream
    output.close();
    return 0;
}