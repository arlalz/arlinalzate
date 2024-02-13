/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on February 2, 2024, 8:32 AM
 * Purpose: Polish the final pirinola game
 * 
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <ctime> // For time()
using namespace std;

// Function prototype
void pirinolaGame(string usr1, string usr2);

int main() {
    srand(static_cast<unsigned int>(time(0))); // Initialize random seed

    string usr1, usr2;
    int chp1 = 10, chp2 = 10, pot = 0, rnd = 1;

    cout << setw(53) << "Welcome to Toma Todo!" << endl
         << "Toma Todo, or Pirinola as it is best known in Colombia, is a game of chance and MONEY!" << endl
         << "The main point for winning is to be the last one remaining with coins." << endl
         << "If you run out of coins you're OUT, if you still have coins at the end, you WIN!" << endl
         << setw(45) << "GOOD LUCK!" << endl;

    cout << endl << "Input Player 1's Name: ";
    cin >> usr1;
    cout << endl << "Input Player 2's Name: ";
    cin >> usr2;

    // Initial chip distribution
    chp1 -= 2;
    chp2 -= 2;
    pot += 4;

    cout << endl << "OK! Since " << usr1 << " and " << usr2 << " are playing, " << endl
         << "we start by putting two chips from each player into the pot." << endl
         << "Pot: " << setw(3) << pot << " Chips" << endl
         << usr1 << ": " << setw(3) << chp1 << " Chips" << endl
         << usr2 << ": " << setw(3) << chp2 << " Chips" << endl;

    pirinolaGame(usr1, usr2);

    return 0;
}

void pirinolaGame(string usr1, string usr2)
{
        int chp1 = 8,
            chp2 = 8, 
            pot = 4, 
            rnd = 1;
         bool gmOn = true;

    do {
        cout << endl << "This is round: " << rnd << endl;

        // jugador uno
        cout << "Player " << usr1 << "'s Turn!" << endl;
        
        int spin = rand() % 6 + 1;
        
        switch (spin) 
        {
            case 1:
                cout << endl << "TAKE ONE!" << endl;
                chp1++;
                chp2++;
                pot -= 2;
                break;
            case 2:
                cout << endl << "Take TWO!" << endl;
                chp1 += 2;
                chp2 += 2;
                pot -= 4;
                break;
            case 3:
                cout << endl << "TAKE EVERYTHING!" << endl;
                chp1 += pot;
                pot = 0;
                break;
            case 4:
                cout << endl << "Put ONE!" << endl;
                chp1--;
                pot++;
                break;
            case 5:
                cout << endl << "Put TWO!" << endl;
                chp1 -= 2;
                pot += 2;
                break;
            case 6:
                cout << endl << "Everyone PUTS!" << endl;
                chp1 -= 2;
                chp2 -= 2;
                pot += 4;
                break;
        }

        cout << "Pot: " << setw(5) << pot << " Chips" << endl
             << usr1 << ": " << setw(3) << chp1 << " Chips" << endl
             << usr2 << ": " << setw(3) << chp2 << " Chips" << endl;

        // game winner?
        
        if (chp1 <= 0) 
        {
            cout << endl << usr1 << " has no more chips!" << endl
                 << usr2 << " wins!";
            break;
        } 
        else if (chp2 <= 0) 
        {
            cout << endl << usr2 << " has no more chips!" << endl
                 << usr1 << " wins!";
            break;
        } 
        else if (pot == 0) 
        {
            if (chp1 > chp2)
            {
                cout << endl << usr1 << " has more chips!" << endl
                     << usr1 << " WINS!" << endl;
            }
            else if (chp1 < chp2)
            {
                cout << endl << usr2 << " has more chips!" << endl
                     << usr2 << " WINS!" << endl;
            }
            else
            {
                cout << endl << "The pot has no coins and "<<
                        "both players have the same amount of chips!" << endl
                     << "WE HAVE A TIE!";
            }
            break;
            
        }

        // Player 2's turn
        cout << "Player " << usr2 << "'s Turn!" << endl;
        spin = rand() % 6 + 1;
        switch (spin) {
            case 1:
                cout << endl << "TAKE ONE!" << endl;
                chp1++;
                chp2++;
                pot -= 2;
                break;
            case 2:
                cout << endl << "Take TWO!" << endl;
                chp1 += 2;
                chp2 += 2;
                pot -= 4;
                break;
            case 3:
                cout << endl << "TAKE EVERYTHING!" << endl;
                chp2 += pot;
                pot = 0;
                break;
            case 4:
                cout << endl << "Put ONE!" << endl;
                chp2--;
                pot++;
                break;
            case 5:
                cout << endl << "Put TWO!" << endl;
                chp2 -= 2;
                pot += 2;
                break;
            case 6:
                cout << endl << "Everyone PUTS!" << endl;
                chp1 -= 2;
                chp2 -= 2;
                pot += 4;
                break;
        }

        cout << "Pot: "      << setw(5) << pot  << " Chips" << endl
             << usr1 << ": " << setw(3) << chp1 << " Chips" << endl
             << usr2 << ": " << setw(3) << chp2 << " Chips" << endl;

        // game winner pt.2?
        if (chp1 <= 0)
        {
            cout << endl << usr1 << " has no more chips!" << endl
                 << usr2 << " wins!";
           
        } 
        else if (chp2 <= 0) 
        {
            cout << endl << usr2 << " has no more chips!" << endl
                 << usr1 << " wins!";
            
        } else if (pot == 0) {
            if (chp1 > chp2)
                cout << endl << usr1 << " has more chips!" << endl
                     << usr1 << " WINS!" << endl;
            else if (chp1 < chp2)
                cout << endl << usr2 << " has more chips!" << endl
                     << usr2 << " WINS!" << endl;
           
            else
                cout << endl << "The pot has no more coins and both players have the same amount of coins!" << endl
                     << "WE HAVE A TIE!";
           
        }

        rnd++;
    } while (gmOn);
}
