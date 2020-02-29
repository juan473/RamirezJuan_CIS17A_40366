/* 
 * File:   main.cpp
 * Author: Juan Ramirez
 * Created on February 28, 2020, 3;36 PM
 * Purpose: Population Growth
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related

//Function Prototypes

//Execution Begins Here!
int main() { 
    double num;
    double increase;
    int days;
    
    increase = -1;
    
    while (num < 2)
    {
        cout << "Population size: ";
        cin >> num;
        if (num < 2)
            cout << "Invalid Amount" << endl;
    }
    
      while (increase < 0)
    {
        cout << "Daily Increase: ";
        cin >> increase;
        if (increase < 0)
            cout << "Invalid Amount" << endl;
    }
    
      while (days < 1)
    {
        cout << "Number of days: ";
        cin >> days;
        if (num < 1)
            cout << "Invalid Amount" << endl;
    }
    
    increase = increase + 1;
    
    cout << setprecision(0) << fixed;
    cout << endl << "Population" << endl;
    cout << "------------" << endl;
    
    for (int i = 1; i <= days; i++)
    {
        cout << "Day " << i << ": " << num << endl;
        num = increase * num;
    } 
    //Exit stage right!
    return 0;
}
