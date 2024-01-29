/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 18, 2024, 6:51 PM
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

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    unsigned int str[5];
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    // This fills up the array with the sales number for the five stores
    for (int i = 1; i < 6;i++)
    {
        cout << endl;
        cout << "Enter today's sales for store " << i <<":";
        cin >>str[i];
    }
   
    cout << endl << "SALES BAR CHART (Each * = $100)" << endl;
    
    /* This will look at every input in the 
     * array and do the math to show the bar
     */
    for (int k = 1; k < 6;k++)
    {
        cout << "Store " << k <<":";
       
        for (int d = 0; d < (str[k] / 100); d++)
        {
            cout << "*";
        }
          cout << endl;
    }
    
    //Display the outputs
    
    //In the step prior I kind of did both in one, I mapped and also displayed. 
    
    //Exit the program
 
    return 0;
}

