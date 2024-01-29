/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 11, 2024, 9:00 PM
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
const float prcnt = .80;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float price, insure;
    
    //Initialize Variables
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin >> price;
    //Map the inputs/known to the outputs
    insure = price * prcnt;
    
    //Display the outputs
    cout << "You need $" << insure << " of insurance.";
    
    //Exit the program
 
    return 0;
}