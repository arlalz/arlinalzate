/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 11, 2024, 9:22 PM
 */

//System Libraries
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
    float tempF, conv;
    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" << endl 
         << "Input Degrees Fahrenheit" << endl;
    cin >> tempF;
    //Map inputs -> outputs
    conv = (5.0/9.0) * (tempF - 32);
    
    //Display the outputs
    cout << fixed << setprecision(1) << tempF << " Degrees Fahrenheit = " 
         << fixed << conv << " Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}