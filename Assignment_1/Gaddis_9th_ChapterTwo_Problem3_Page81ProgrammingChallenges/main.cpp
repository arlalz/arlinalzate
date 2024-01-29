/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 4:50 PM
 */

//System Level Libraries
#include <iostream>  //Input-Output Library

using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float statT = .04;
const float counT = .02;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float bought, totalT;
    //Initialize Variables
    bought = 95;
    //Map the inputs/known to the outputs
    totalT = (bought * statT) + (bought * counT);
    
    //Display the outputs
    cout << "The total sales tax on a purchase of $" << bought
            << " is $" << totalT;
    //Exit the program
 
    return 0;
}
