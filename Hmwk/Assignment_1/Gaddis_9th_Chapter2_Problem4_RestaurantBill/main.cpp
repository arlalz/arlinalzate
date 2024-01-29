/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 6:47 PM
 */

#include <cstdlib>
#include <iomanip>
//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float tax = 0.0675;
const float tip = 0.2;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float usrMeal, usrTax,usrTip, usrTot;
    //Initialize Variables
    usrMeal = 88.67;
    
    //Map the inputs/known to the outputs
    usrTax = usrMeal * tax;
            usrTip = (usrTax + usrMeal) * tip;
            usrTot = usrTax + usrMeal + usrTip;
    //Display the outputs
            cout << "Your meal cost: $" << usrMeal << endl
                    << "Your tax amount is: $" << setprecision(3) << usrTax << endl
                    << "Your tip amount is: $" << setprecision(4) << usrTip << endl
                    << "Your total bill is: $" <<  setprecision(5) << usrTot << endl;
    //Exit the program 
 
    return 0;
}
