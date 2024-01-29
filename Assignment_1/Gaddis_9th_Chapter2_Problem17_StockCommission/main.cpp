/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 6:37 PM
 */

#include <cstdlib>
//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float stockSr = 750;
const float stockP = 35.00;
const float comPer = .02;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float priceSt, com, total;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    priceSt = stockSr * stockP;
    com = priceSt * comPer;
    total = com + priceSt;
    //Display the outputs
    cout << "The total amount paid for the stock alone: $" << priceSt << endl
            << "The amount fo commission: $" << com << endl
            << "The total amount paid: $" << total;
    //Exit the program
 
    return 0;
}

