/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on January 28, 2024, 2:13 PM
 * Purpose: Better the outline for the rhythm of the game 
 * and find a game to do checks for chips
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
    string usr1, 
           usr2;
    unsigned int chp1, 
               chp2,
               bet, 
               pot,
               turn,
               spin,
               rnd;
    
    //Initialize Variables
        //Everyone Starts off with 10 Chips
    chp1 = chp2 = 10;
    pot = rnd = 0;
    turn = 2;
    
    //Map the inputs/known to the outputs
        //Introduction
    cout <<  right << setw(53) << "Welcome to Toma Todo!" << endl 
         << setw(10) << "Toma Todo or Pirinola as it is best known in Colombia is a game or chance and MONEY!" << endl
         << setw(10) << "There will be instructions and explanations as the game goes but the main point for winning is to be be the last one remaining with coins, " << endl
         << setw(10) <<"If you run out of coins you're OUT, if at the end you still have coins you WIN!" << endl 
         << setw(45) << "GOOD LUCK!";
    
    
    cout << endl << "Input Player's 1 Name: ";
    cin >> usr1;
    
    cout << endl << "Input Player's 2 Name: ";
    cin >> usr2;
    
    cout << endl << "OKAY! Since " << usr1 << " and " << usr2 << " are playing, "
          << "We are going to start off by putting two of each player's 10 chips into the pot." << endl;
    chp1 -= 2;
    chp2 -= 2;
    pot += 4;
    cout << "Every player got two chip that brings: " << endl
                         << "Pot: "      << pot << " Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
    
    //Display the outputs
    do {
        cout << endl << "This is round: " << rnd;
        // ADD more explanations
            if (turn == 1)
            {
                turn = 2;
                 spin = (rand() % 6) + 1;
                 switch(spin)
                 {
                case 1:
                    cout << endl << "TAKE ONE!" << endl
                         << "Every players takes one chip from the pot." << endl;
                    chp1 += 1;
                    chp2 += 1;
                    pot -= 2;
                    cout << "Every player got one chip that brings: " << endl
                         << "Pot: "      << pot << " Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 2:
                    cout << endl <<"Take TWO!" << endl 
                         << "Every player takes two chips from the pot" << endl;
                    chp1 += 2;
                    chp2 += 2;
                    pot -= 4;
                    cout << "Every player took two chips that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 3:
                    cout << endl << "TAKE EVERYTHING!" << endl 
                         << "Player takes all chips from the pot" << endl; 
                    usr1 += pot;
                    pot -= pot;
                    cout << "Player " << usr1 << " took two chips that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 4:
                    cout << endl <<"Put ONE!" << endl
                         << "Player puts one chip in the pot" << endl; 
                    break;
                case 5:
                    cout << endl << "Put TWO!" << endl
                         << "Player puts two chips in the pot" << endl;
                    break;
                case 6:
                    cout << endl << "Everyone PUTS!" << endl
                         << "Everyone puts two chips in the pot" << endl;
                    chp1 -= 2;
                    chp2 -= 2;
                    pot += 4;
                    break;
              default:
                  break;
                 } 
        }
            else if (turn == 2)
            {
                turn = 1;
                spin = (rand() % 12 - 7 + 1) + 7;
           
                switch (spin)
                {
                 case 7:
                    cout << endl << "Every player lost got one chip that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 8:
                    cout << endl << "Take TWO!" << endl 
                         << "Every player takes two chips from the pot" << endl;
                    chp1 -= 2;
                    chp2 -= 2;
                    pot += 4;
                    cout << "Every player took got two chip that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 9:
                    cout << endl << "TAKE EVERYTHING!" << endl 
                         << "Player takes all chips from the pot" << endl;  
                    chp2 += pot;
                    pot -= pot;
                    cout << usr2 << " Took all the chips in the pot that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 10:
                    cout << endl << "Put ONE!" << endl
                         << usr2 << " puts one chip in the pot" << endl; 
                    chp2 -= 1;
                    pot += 1;
                    cout << usr2 << " took got one chip that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 11:
                    cout << endl <<"Put TWO!" << endl
                         << usr2 << " puts two chips in the pot" << endl;
                    chp2 -= 2;
                    pot += 2;
                    cout << usr2 << " took two chips that brings: " << endl
                         << "Pot: "      << pot << " Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                case 12:
                    cout << endl <<"Everyone PUTS!" << endl
                         << "Everyone puts two chips in the pot" << endl;
                    chp1 -= 2;
                    chp2 -= 2;
                    pot += 4;
                    cout << "Every player put two chips that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
                    break;
                 default:
                        break;
                }
            }
        if (pot <= 2)
        {
            cout << "The pot has less than or equal to two chips to continue playing, " << endl
                 << "Everyone add TWO to the pot!";
            chp1 -= 2;
            chp2 -=2;
            pot += 4;
            cout << "Every player put two chips that brings: " << endl
                         << "Pot: "      << pot << "Chips" << endl
                         <<  usr1 <<": " << chp1 << " Chips" << endl
                         <<  usr2 <<": " << chp2 << " Chips" << endl;
        }
        else if ( chp1 <= 0)
        {
            cout << usr1 << " has no more chips!" << endl
                 << usr2 << " wins!";
                    
        }
        else if (chp2 <= 0)
        {
            cout << usr2 << " has no more chips!" << endl
                 << usr1 << " wins!";
        }
            rnd += 1;
               // Add a check for no more coins in the pot, coin value changes, the pot itself         
    }while(chp1 > 0 && chp2 > 0 && pot > 0);
    
    //Exit the program
 
    return 0;
}

