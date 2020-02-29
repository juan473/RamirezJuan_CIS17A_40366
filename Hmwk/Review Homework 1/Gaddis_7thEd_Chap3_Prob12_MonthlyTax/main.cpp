/* 
 * File:   main.cpp
 * Author: Juan Ramirez
 * Created on February 28, 2020, 2:07 PM
 * Purpose: Monthly Sales Tax
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related

//Function Prototypes

//Execution Begins Here!
int main() { 
    string month;
    int year;
    double sales;
    double total;
    double cTax;
    double sTax;
    double tTax;
   
    cout << "Enter Month: ";
    getline(cin, month);
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter Total Sales: ";
    cin >> total;
    
    sales = total / 1.06;
    cTax = sales * .02;
    sTax = sales * .04;
    tTax = total - sales;
    
    cout << endl << "Month: " << month << endl;
    cout << "Year: " << year << endl;
    cout << "--------------------" << endl;
    cout << setprecision(2) << fixed;
    cout << "Total Collected:     $" << setw(9) << total << endl;
    cout << "Sales:               $" << setw(9) << sales << endl;
    cout << "County Sales Tax:    $" << setw(9) << cTax << endl;
    cout << "State Sales Tax:     $" << setw(9) << sTax << endl;
    cout << "Total Sales Tax:     $" << setw(9) << tTax << endl;
   
    
    //Exit stage right!
    return 0;
}
