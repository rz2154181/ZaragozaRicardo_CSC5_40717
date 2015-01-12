/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 12, 2015, 10:07 AM
 * Purpose: use cmath
 */

//system libraries
#include <cstdlib>//Random rand(),srand()
#include <iostream>//Keyboard
#include <fstream>
#include <ctime>
#include <cmath>//math function library
#include <iomanip>
using namespace std;

//User libraries

//global constants
const float PIDIV4=atan(1);
const float CNVDGRD=PIDIV4/45;

//function prototypes

//execution begins here
int main(int argc, char** argv) 
{
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare a fie object
    ofstream output;
    //open the file
    output.open("SinCosTan.dat");
    //declare the angle variable as an integer
    //in degrees, and the radian angle as a float
    int angDeg=rand()%361-180;//angle [-180,180]
    float angRad=angDeg*CNVDGRD;  
    //output the angle in degrees
    output<<"Angle in degrees => "<<angDeg<<endl;
    output<<"Angle in radians => "<<angRad<<endl;
    //output the sin, cos, tan
    output<<fixed<<setprecision(4)<<showpoint;
    output<<"sin("<<angDeg<<") ="<<setw(8)<<sin(angRad)<<endl;
    output<<"cos("<<angDeg<<") ="<<setw(8)<<cos(angRad)<<endl;
    output<<"tan("<<angDeg<<") ="<<setw(8)<<tan(angRad)<<endl;
    //set the values for each dice
   
    output.close();
    return 0;
}