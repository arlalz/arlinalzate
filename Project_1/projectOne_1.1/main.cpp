/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 23, 2024, 6:08 PM
 * Purpose: Outline key components for the Toma Todo Game, 
 *          and include formatting that will be needed
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
      //Time has to be set because the Pirinola has to land on a random side
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
        /*For purpose of efficiency,
         * we are going to use the minium amount of players needed */
    
    string usr1, usr2, status;
    signed int chp1, chp2, bet;
    
    //Initialize Variables
        //Everyone Starts off with 10 Chips
    chp1 = chp2 = 10;
    status = "Next Turn";
    
    //Map the inputs/known to the outputs
        //Introduction
    cout <<  right << setw(53) << "Welcome to Toma Todo!" << endl 
         << setw(10) << "Toma Todo or Pirinola as it is best known in Colombia is a game or chance and MONEY!" << endl
         << setw(10) << "There will be instructions and explanations as the game goes but the main point for winning is to be be the last one remaining with coins, " << endl
         << setw(10) <<"If you run out of coins you're OUT, if at the end you still have coins you WIN!" << endl 
         << setw(45) << "GOOD LUCK!";
    
    //Display the outputs
    do {
        //Get a random number from 1 to 6
        int option, spin;
        // Male random number maker 
        cin >> spin;
        
        // ADD more explanations
        switch (option)
                case 1:
                    cout << "TAKE ONE!" << endl
                         << "Every players takes one chip from the pot." << endl;
                    break;
                case 2:
                    cout << "Take TWO!" << endl 
                         << "Every player takes two chips from the pot" << endl;
                    break;
                case 3:
                    cout << "TAKE EVERYTHING!" << endl 
                         << "Player takes all chips from the pot" << endl;  
                    break;
                case 4:
                    cout << "Put ONE!" << endl
                         << "Player puts one chip in the pot" << endl; 
                    break;
                case 5:
                    cout << "Put TWO!" << endl
                         << "Player puts two chips in the pot" << endl;
                    break;
                case 6:
                    cout << "Everyone PUTS!" << endl
                         << "Everyone puts two chips in the pot" << endl;
                    break;
                default:
                        break;
               // Add a check for no more coins in the pot, coin value changes, the pot itself         
    }while(status = "Next Turn");
    
    //Exit the program
 
    return 0;
}


