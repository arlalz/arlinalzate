/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 5:22 PM
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
const float saleTax = .07;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float one, two, three, four, five, sub, tax, total;
    //Initialize Variables
    one = 15.95;
    two = 24.95;
    three = 6.95;
    four = 12.95;
    five = 3.95;
         
    //Map the inputs/known to the outputs
    sub = one + two + three + four + five;
    tax = sub * saleTax;
    total = sub + tax;
    
    //Display the outputs
    cout << "Price of item 1: $" << one << endl
            << "Price of item 2: $" << two << endl
            << "Price of item 3: $" << three << endl
            << "Price of item 4: $" << four << endl
            << "Price of item 5: $" << five << endl
            << endl << "Subtotal: $" << sub << endl
            << "Sales Tax: $" << setprecision(3) <<tax << endl
            << "Total: $" << setprecision(4) << total;
    //Exit the program
 
    return 0;
}

