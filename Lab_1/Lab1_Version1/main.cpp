/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 7:09 PM
 */

#include <cstdlib>
//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float milBdgt,fedBdgt,mlPrcnt;
    
    //Initialize Variables
    milBdgt=7.0e11f;    //Military Budget = 700 Billion   

    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    
    //Map the inputs/known to the outputs
    mlPrcnt = (milBdgt / fedBdgt) * 100;
    
    //Display the outputs
    cout << "In the year 2018, the military took up %" << setprecision(4) << mlPrcnt 
            << " of the federal budget which was $4.1 Trillion.";
    
    //Exit the program
 
    return 0;
}