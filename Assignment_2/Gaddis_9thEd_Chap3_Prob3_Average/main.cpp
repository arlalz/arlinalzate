/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 11, 2024, 7:46 PM
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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
//Declare Variables
    float one, two, three, four, five, total, avg;
    
    //Initialize Variables
    cin >> one >> two >> three >> four >> five;
   
    
    //Map the inputs/known to the outputs
    total = one + two + three + four + five;
    avg = total / 5;
    
    //Display the outputs
    cout << "Input 5 numbers to average." << endl;
    cout << "The average = " << fixed << setprecision(1) << avg;
    //Exit stage right or left!
    return 0;
}