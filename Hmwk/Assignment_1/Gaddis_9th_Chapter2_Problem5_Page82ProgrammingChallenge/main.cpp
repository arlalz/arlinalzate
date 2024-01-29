/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 5:07 PM
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
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
    int one, two, three, four, five, average, sum;
    //Initialize Variables
    one = 28;
    two = 32;
    three = 37;
    four = 24;
    five = 33;
    
    //Map the inputs/known to the outputs
    sum = one + two + three + four + five;
    average = sum / 5;
    
    //Display the outputs
    cout << "The average of the numbers is " << average;
    //Exit the program
 
    return 0;
}


