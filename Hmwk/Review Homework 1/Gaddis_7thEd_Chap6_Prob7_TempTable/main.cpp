/* 
 * File:   main.cpp
 * Author: Juan Ramirez
 * Created on February 28, 2020, 5:04 PM
 * Purpose: Temperature Table
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related

//Function Prototypes
float celsius(float temp);

//Execution Begins Here!
int main() { 
    float temp;
    float cTemp;
    
    cTemp = 0;
    temp = 0;
    
    cout << setprecision(2) << fixed;  
    cout << "Fahrenheit  Celsius" << endl;
    cout << "-------------------" << endl;
    
    for (temp = 0; temp < 21; temp++)
    {
        cout << temp << setw(15) << right;
        cTemp = celsius(temp);
        cout << cTemp << endl;
    }
    
    //Exit stage right!
    return 0;
}

float celsius(float temp)
{
	float newTemp;
	newTemp = (5.0 / 9.0)*(temp - 32);
	return newTemp;
}
