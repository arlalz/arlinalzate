/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate 
 *
 * Created on January 13, 2024, 11:24 PM
 */
//System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float input,
          posSum = 0,
          negSum = 0,
          totSum = 0;
    
    //Initialize or input i.e. set variable values
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    
    
    //Map inputs -> outputs
     for (int i = 0; i < 10; i++)
    {
        cin >> input;
        totSum += input;
        if (input <= 0)
        {
            negSum += input;
        }
        else if (input > 0)
        {
            posSum += input;
        }
    }
    //Display the outputs

    cout << "Negative sum =" << setw(4) << negSum << endl 
         << "Positive sum =" << setw(4) << posSum << endl
         << "Total sum    =" << setw(4) << totSum << endl;
            
    //Exit stage right or left!
    return 0;
}
