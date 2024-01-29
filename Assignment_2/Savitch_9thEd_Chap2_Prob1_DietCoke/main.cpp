/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin ALzate
 *
 * Created on January 11, 2024, 11:20 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float POPSWT = 0.001f;
const float MOUSEK = 5.0f;
const float MOUSEM = 35.0f;
const float SODAM = 350.0f;
const float LBS2G = 453.592f;
//Function Prototypes


//Input weight you want to be


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int humanM,killM,popCan;
    
    //Initialize or input i.e. set variable values
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> humanM;
    humanM *= LBS2G;
    
    popCan = humanM * MOUSEK /(SODAM * POPSWT * MOUSEM);
    //Map inputs -> outputs
    cout << "The maximum number of soda pop cans" << endl 
            << "which can be consumed is " << popCan << " cans";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
