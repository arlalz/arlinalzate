/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 9:34 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    float sinA, cosA, tanA;
    float angFix;
    int angle;
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions" << endl 
         << "Input the angle in degrees." << endl;
    cin >> angle;
    angFix = angle * (M_PI / 180);
    
    //Map inputs -> outputs
    sinA = sin(angFix);
    cosA = cos(angFix);
    tanA = tan(angFix);

    //Display the outputs
    cout << "sin(" << angle << ") = " << fixed << showpoint << setprecision(4) << sinA << endl;
    cout << "cos("  << angle << ") = "  << cosA << endl;
    cout << "tan(" << angle << ") = "  << tanA;
    
    //Exit stage right or left!
    return 0;
}
