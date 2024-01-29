/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 11, 2024, 8:49 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cookie , cal, serve;
    //Initialize or input i.e. set variable values
    cout << "Calorie Counter" << endl;
   
    cout << "How many cookies did you eat?" << endl;
    cin >> cookie;
    
    //Map inputs -> outputs
    
    //Display the outputs
    serve = 40 / 10;
    cal = (cookie / serve) * 300;
   
    
    cout << "You consumed " << cal << " calories.";
    //Exit stage right or left!
    
    
    return 0;
}