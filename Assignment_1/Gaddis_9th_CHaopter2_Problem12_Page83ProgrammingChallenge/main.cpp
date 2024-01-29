/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 5:49 PM
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float acreSq = 43560;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float sqFt, conv;
    //Initialize Variables
    sqFt = 391876;
    
    //Map the inputs/known to the outputs
    conv = sqFt / acreSq;
    //Display the outputs
    cout << "The number of acres of a land of " << 
            sqFt << " Square Feet is: "  << setprecision(1) << conv;
    
    //Exit the program
 
    return 0;
}

