/* 
 * File:   main.cpp
 * Author: Juan Ramirez
 * Created on February 28, 2020, 2:51 PM
 * Purpose: Property Tax
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
    double acValue;
    double asValue;
    double tax;
   
    cout << "Enter Property Value: ";
    cin >> acValue;
    
    asValue = acValue * .6;
    tax = asValue * .0064;
    
    cout << endl << "Property Report" << endl;
    cout << "--------------------" << endl;
    cout << setprecision(2) << fixed;
    cout << "Actual Value:      $" << setw(9) << acValue << endl;
    cout << "Assessment Value:  $" << setw(9) << asValue << endl;
    cout << "Property Tax:      $" << setw(9) << tax << endl;
   
    
    //Exit stage right!
    return 0;
}


