/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on February 2, 2024, 8:32 AM
 * Purpose: Revision to get everything working better
 * 
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>
#include <ctime>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
void pirinolaGame(string usr1, string usr2, signed int rnd, signed int chp1, signed int chp2);

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    //Initialize Random Seed once here!
    //Time has to be set because the Pirinola has to land on a random side
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
        /*For purpose of efficiency,
         * we are going to use the minium amount of players needed */
    int SIZE = 2;
    
    string usr1,
           usr2;
    
    string players[SIZE] = {usr1, usr2};
    
    signed int chp1, 
               chp2, 
               pot,
               rnd;
    
    signed int usrChp[2] = {chp1, chp2};
    
    //Initialize Variables
        //Everyone Starts off with 10 Chips
    chp1 = chp2 = 10;
    pot = 0;
    rnd = 1;
    turn = rand() % (2) +1;
    
    //Map the inputs/known to the outputs
        //Introduction
   
    cout <<  right << setw(53) << "Welcome to Toma Todo!" << endl 
         << setw(10) << "Toma Todo, or Pirinola as it is best known in Colombia, is a game of chance and MONEY!" << endl
         << setw(10) << "There will be instructions and explanations as the game goes," << endl 
         << "but the main point for winning is to be be the last one remaining with coins, " << endl
         << setw(10) <<"If you run out of coins you're OUT, if at the end you still have coins you WIN!" << endl 
         << setw(45) << "GOOD LUCK!";
    
    
    cout << endl << "Input Player's 1 Name: ";
    cin >> usr1;
    
    cout << endl << "Input Player's 2 Name: ";
    cin >> usr2;
    
    cout << endl << "OKAY! Since " << usr1 << " and " << usr2 << " are playing, " << endl
          << "We are going to start off by putting two of each player's 10 chips into the pot." << endl;
    chp1 -= 2;
    chp2 -= 2;
    pot += 4;
    cout << "Every player put two chips that brings: " << endl
                         << "Pot: "        << setw(5) << pot << " Chips" << endl
                         <<  usr1  << ": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2  << ": " << setw(3) << chp2 << " Chips" << endl;
    
    pirinolaGame(usr1, usr2, rnd, chp1, chp2, pot);
    
    //Exit the program
 
    return 0;
}

void pirinolaGame(string usr1, string usr2, signed int &rnd,
                  signed int &chp1, signed int &chp2, signed int &pot)
{
    //Declaring
    signed int spin,
               turn;
            
    //Display the outputs
    do {
        cout << endl << "This is round: " << rnd << endl;
        
            if (turn == 1)
            {
                cout << "Player " << usr1 << " Turn!" << endl;
                turn = 2;
                 spin = rand() % (6) + 1;
                 switch(spin)
                 {
                case 1:
                    cout << endl << "TAKE ONE!" << endl
                         << "Every players takes one chip from the pot." << endl;
                    chp1 += 1;
                    chp2 += 1;
                    pot -= 2;
                    cout << "Every player got one chip that brings: " << endl
                         << "Pot: "      << pot  << " Chips" << endl
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
                         << "Pot: "      << setw(5) << pot  << " Chips" << endl
                         <<  usr1 <<": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2 <<": " << setw(5) << chp2 << " Chips" << endl;
                    break;
                case 3:
                    cout << endl << "TAKE EVERYTHING!" << endl 
                         << "Player takes all chips from the pot" << endl; 
                    usr1 += pot;
                    pot -= pot;
                    cout << "Player " << usr1 << " took all the chips that brings: " << endl
                         << "Pot: "      << setw(5) << pot  << " Chips" << endl
                         <<  usr1 <<": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2 <<": " << setw(5) << chp2 << " Chips" << endl;
                    break;
                case 4:
                    cout << endl <<"Put ONE!" << endl
                         << usr1 << " puts one chip in the pot" << endl; 
                    chp1 -= 1;
                    pot += 1;
                    cout << usr1 << " put one chip that brings: " << endl
                         << "Pot: "        << setw(5) << pot << " Chips" << endl
                         <<  usr1  << ": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2  << ": " << setw(3) << chp2 << " Chips" << endl;
                    
                    
                    break;
                case 5:
                    cout << endl << "Put TWO!" << endl
                         << usr1 << " puts two chips in the pot" << endl;
                    chp1 -= 2;
                    pot += 2;
                    cout << usr1 << "put one chip that brings: " << endl
                         << "Pot: "        << setw(5) << pot << " Chips" << endl
                         <<  usr1  << ": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2  << ": " << setw(3) << chp2 << " Chips" << endl;
                    break;
                case 6:
                    cout << endl << "Everyone PUTS!" << endl
                         << "Everyone puts two chips in the pot" << endl;
                    chp1 -= 2;
                    chp2 -= 2;
                    pot += 4;
                    cout << "Everyone put two chip[s in the pot this brings:  " << endl
                         << "Pot: "        << setw(5) << pot << " Chips" << endl
                         <<  usr1  << ": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2  << ": " << setw(3) << chp2 << " Chips" << endl;
                    break;
              default:
                  break;
                 } 
        }
            else if (turn == 2)
            {
                cout << "Player " << usr2 << " Turn!" << endl;
                turn = 1;
                
                spin = rand() % (12 - 7 + 1) + 7;
           
                switch (spin)
                {
                 case 7:
                    cout << endl << "TAKE ONE!" << endl
                         << "Every players takes one chip from the pot." << endl;
                    chp1 += 1;
                    chp2 += 1;
                    pot -= 2;
                    cout << "Every player got one chip that brings: " << endl
                         << "Pot: "      << setw(5) << pot  << " Chips" << endl
                         <<  usr1 <<": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2 <<": " << setw(5) << chp2 << " Chips" << endl;
                    break;
                case 8:
                    cout << endl << "Take TWO!" << endl 
                         << "Every player takes two chips from the pot" << endl;
                    chp1 -= 2;
                    chp2 -= 2;
                    pot += 4;
                    cout << "Every player took got two chip that brings: " << endl
                         << "Pot:"     << setw(5)  << pot  <<  " Chips" << endl
                         <<  usr1 <<":" << setw(5) << chp1 <<  " Chips" << endl
                         <<  usr2 <<":" << setw(5) << chp2 << " Chips" << endl;
                    break;
                case 9:
                    cout << endl << "TAKE EVERYTHING!" << endl 
                         << "Player takes all chips from the pot" << endl;  
                    chp2 += pot;
                    pot -= pot;
                    cout << usr2 << " Took all the chips in the pot that brings: " << endl
                         << "Pot:"      << setw(5) << pot  << " Chips" << endl
                         <<  usr1 <<":" << setw(5) << chp1 << " Chips" << endl
                         <<  usr2 <<":" << setw(5) << chp2 << " Chips" << endl;
                    break;
                case 10:
                    cout << endl << "Put ONE!" << endl
                         << usr2 << " puts one chip in the pot" << endl; 
                    chp2 -= 1;
                    pot += 1;
                    cout << usr2 << " put one chip that brings: " << endl
                         << "Pot: "      << setw(5) << pot  << " Chips" << endl
                         <<  usr1 <<": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2 <<": " << setw(5) <<chp2 << " Chips" << endl;
                    break;
                case 11:
                    cout << endl <<"Put TWO!" << endl
                         << usr2 << " puts two chips in the pot" << endl;
                    chp2 -= 2;
                    pot += 2;
                    cout << usr2 << " put two chips that brings: " << endl
                         << "Pot: "      << setw(5) << pot  << " Chips" << endl
                         <<  usr1 <<": " << setw(5) <<chp1 << " Chips" << endl
                         <<  usr2 <<": " <<setw(5) << chp2 << " Chips" << endl;
                    break;
                case 12:
                    cout << endl <<"Everyone PUTS!" << endl
                         << "Everyone puts two chips in the pot" << endl;
                    chp1 -= 2;
                    chp2 -= 2;
                    pot += 4;
                    cout << "Every player put two chips that brings: " << endl
                         << "Pot: "      << setw(5) << pot  << " Chips" << endl
                         <<  usr1 <<": " << setw(5) << chp1 << " Chips" << endl
                         <<  usr2 <<": " << setw(5) << chp2 << " Chips" << endl;
                    break;
                 default:
                        break;
                }
            }
        if (chp1 <= 0)
        {
           cout << endl << endl << usr1 << " has no more chips!" << endl
                 << usr2 << " wins!";   
        }
            else if ( chp2 <= 0)
        {
            cout <<endl << endl << usr2 << " has no more chips!" << endl
                 << usr1 << " wins!";          
        }
            else if (pot == 0)
        {
                if (chp1 > chp2)
                    {
                        cout << endl << endl << setw(10) << usr1 << " has more chips!" << endl
                             << setw(10) << usr1 << " WINS!" << endl;
                    }
                    else if (chp1 < chp2)
                        {
                         cout << endl << endl <<setw(10) << usr2 << " has more chips!" << endl
                              << setw(10) << usr2 << " WINS!" << endl;
                        }
            else if (chp1 == chp2)
            {
                cout << endl << endl << "The pot has no more coins and both players have the same amount of coins!" << endl 
                        << "WE HAVE A TIE!";
            }
        }
            rnd += 1;      
    }while(chp1 > 0 && chp2 > 0 && pot > 0);
}