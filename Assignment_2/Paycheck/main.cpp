/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate 
 *
 * Created on January 11, 2024, 10:37 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

/System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
   //Declare Variables
    int pay, hours;
    float income;
    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> pay;
    cin >> hours;
    
    //Map inputs -> outputs
    income = pay * hours;
    income += (hours>40) ? pay*(hours-40)  : 0;
    //Display the outputs
    cout << "Paycheck = " << "$" << setw(7) << fixed << showpoint << setprecision(2) << income;
    //Exit stage right or left!
    return 0;
}