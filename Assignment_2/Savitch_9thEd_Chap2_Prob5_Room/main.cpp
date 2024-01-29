/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 13, 2024, 11:11 PM
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
    int romCap, people, decrease, increase;
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> romCap;
    cin >> people;
    
   
    //Map inputs -> outputs
    
    //Display the outputs
 if (people > romCap)
    {
     decrease = people - romCap;
          cout << "Meeting cannot be held." << endl <<
                "Reduce number of people by " << decrease << 
                " to avoid fire violation.";
    }
    else if (people < romCap)
    {
        increase = romCap - people;
        cout << "Meeting can be held." << endl <<
                "Increase number of people by " 
             << increase << " will be allowed without violation.";;
    }
    //Exit stage right or left!
    return 0;
}
