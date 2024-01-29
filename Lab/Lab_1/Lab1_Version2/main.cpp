/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on January 11, 2024, 7:10 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float milBdgt,fedBdgt,mlPrcnt;
    
    //Initialize Variables
    milBdgt=753.5e11f;    //Military Budget = 753.5 Billion   

    fedBdgt=6.818e12f;    //Federal Budget  = 6.818 Trillion
    
    //Map the inputs/known to the outputs
    mlPrcnt = (milBdgt / fedBdgt);
    
    //Display the outputs
    cout << "For the year 2021, the military took up %" << setprecision(4) << mlPrcnt 
            << " of the federal budget which was $6.818 Trillion.";
    
    //Exit the program
 
    return 0;
}
