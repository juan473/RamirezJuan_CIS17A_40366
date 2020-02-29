/* 
 * File:   main.cpp
 * Author: Juan Ramirez
 * Created on February 28, 2020, 3:09 PM
 * Purpose: Software Sales
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
    int quantity;
    double cost;
    double finalCost;
    
    quantity = 0;
   
    while (quantity <= 0)
    {
        cout << "Enter Number Of Units: ";
        cin >> quantity;
        if (quantity <= 0)
            cout << "Invalid Amount" << endl;
    }
    
    cost = .99 * quantity;
    
    if (quantity < 10)
        cost = cost;
    else if (quantity < 20)
        cost = cost * .8;
    else if (quantity < 50)
        cost = cost * .7;
    else if (quantity < 100)
        cost = cost * .6;
    else
        cost = cost * .5;
    
    cout << setprecision(2) << fixed;
    cout << "Total Cost: $ " << cost;
     
    //Exit stage right!
    return 0;
}

