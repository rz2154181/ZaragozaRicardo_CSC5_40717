/* 
 * File:   main.cpp
 * Author: Ricardo Zaragoza
 * Created on January 6, 2015, 10:10 AM
 * Purpose: Hmwk, Fence length needed
 */

#include <iostream>
using namespace std;
int main()
{
    int height, width, totalLength;
    
    cout << "press return after entering a number.\n";
    cout << "Enter the height of the fence in feet:\n";
    cin >> height;
    cout << "Enter the width of the fence feet:\n";
    cin >> width;
    totalLength=height * width;
    cout << "If you have a height of  ";
    cout << height;
    cout << " ft\n";
    cout << "and a width of  ";
    cout << width;
    cout << " ft, then\n";
    cout << "you will need ";
    cout << totalLength;
    cout << " ft of fencing\n";
    
    return 0;
}
