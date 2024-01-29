/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 13, 2024, 9:53 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//6 month increase - retro
const float PAYINC = 0.076f;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float retPay, newMon, salary;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input previous annual salary." << endl;
    cin >> salary;
    retPay = (static_cast<float>(salary) * PAYINC) /2;
    salary += retPay * 2;
   
    newMon = static_cast<float>(salary) /12;
  
    //Display the outputs
 cout << "Retroactive pay    " << setw(3) << "= $" << setw(7) << showpoint 
          << fixed << setprecision(2) << retPay << endl;
    cout << "New annual salary  " << setw(3) << "= $" << setw(3) << setprecision(2) << salary << endl;
    cout << "New monthly salary " << setw(3) << "= $" << setw(7)  << setprecision(2) << newMon;
    //Exit stage right or left!
    return 0;
}
