/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on February 6, 2024, 2:13 PM
 * Purpose: To emulate a Pirinola Game, where the user inputs names and rounds
 *          are desired to be played. 
 * 
 */

//System Level Libraries
#include <iostream> //in/out put
#include <iomanip>  // styling
#include <ctime>    //seeding time
#include <vector>   //usr names

using namespace std;

// Function prototypes
void pirinolaGame(const string& usr1, const string& usr2, int numRounds);
float calculateWinPercentage(int wins, int numRounds);
void style();


int main(int argc, char** argv) {
    
    //Seeding Time
    srand(static_cast<unsigned int>(time(0)));

    // Declare variables
    string usr1, usr2;
    
    //both players have ten chips to start off with
    vector<int> chips(2, 10);
    int numRnd;
    
    //starting them off, linux puts in random values
     numRnd = 0;
    
    // info and game manual
     
    style();
    cout << endl << endl<< setw(53) << "Welcome to Toma Todo!" << endl
         << "Toma Todo, or Pirinola as it is best known in Colombia, is a game of chance and MONEY!" << endl
         << "The main point for winning is to be the last one remaining with coins." << endl
         << "If you run out of coins you're OUT, if you still have coins at the end, you WIN!" << endl
         << setw(45) << "GOOD LUCK!" << endl << endl;
    style();
    
    // user names
    cout << endl << "Input Player 1's Name: ";
    cin >> usr1;
    cout << "Input Player 2's Name: ";
    cin >> usr2;

    // # of round users want to play game, toma todo is usually really fast
    cout << "This game goes by fast, so please enter the number of rounds to play: ";
    cin >> numRnd;

    // Start the game
    pirinolaGame(usr1, usr2, numRnd);

    return 0;
}

void style()
{
    for (int  i = 0; i < 100; i++)
     {
         cout << "~";
     }
}

// Function to play the Pirinola game
void pirinolaGame(const string& usr1, const string& usr2, int numRounds) 
{
    // Initialize variables
    // Function to play the Pirinola game
   vector<int> chips(2, 10); 
    int pot = 0;
    
    // Number of wins for each player
    int wins1 = 0, 
       wins2 = 0; 

    for (int round = 1; round <= numRounds; round++) {
        cout << endl << "Round: " << round << "/" << numRounds << endl;

        // Reset chips and pot for each round
        chips[0] = chips[1] = 10;
        pot = 0;

        do 
        {
            // Player 1's turn
            int spin = rand() % 6 + 1;
            
            switch (spin) 
            {
                case 1:
                    
                    chips[0]++;
                    chips[1]++;
                    pot -= 2;
                    break;
                case 2:
                    
                    chips[0] += 2;
                    chips[1] += 2;
                    pot -= 4;
                    break;
                case 3:
                    
                    chips[0] += pot;
                    pot = 0;
                    break;
                case 4:
                    
                    chips[0]--;
                    pot++;
                    break;
                case 5:
                    
                    chips[0] -= 2;
                    pot += 2;
                    break;
                    
                case 6:
                    
                    chips[0] -= 2;
                    chips[1] -= 2;
                    pot += 4;
                    break;
            }

            // Player 2's turn
            spin = rand() % 6 + 1;
            
            switch (spin) 
            {
                case 1:
                    
                    chips[0]++;
                    chips[1]++;
                    pot -= 2;
                    break;
                case 2:
                    
                    chips[0] += 2;
                    chips[1] += 2;
                    pot -= 4;
                    break;
                    
                case 3:
                    chips[1] += pot;
                    pot = 0;
                    break;
                    
                case 4:
                    
                    chips[1]--;
                    pot++;
                    break;
                case 5:
                    
                    chips[1] -= 2;
                    pot += 2;
                    break;
                case 6:
                    
                    chips[0] -= 2;
                    chips[1] -= 2;
                    pot += 4;
                    break;
            }
        } while (chips[0] > 0 && chips[1] > 0);

        // after each move
        cout << usr1 << "'s chips: " << chips[0] << endl;
        cout << usr2 << "'s chips: " << chips[1] << endl;
        cout << "Pot: " << pot << " chips" << endl;

        // updating chip counters
        if (chips[0] <= 0 && chips[1] > 0)
            wins2++;
        else if (chips[0] > 0 && chips[1] <= 0)
            wins1++;
    }

    // calling the function to do the math
    float percentage1 = calculateWinPercentage(wins1, numRounds);
    float percentage2 = calculateWinPercentage(wins2, numRounds);

    // final points with percentages
    style();
    cout << endl << "Final Results:" << endl;
    
    cout << usr1 << " wins: " << wins1 << " times (" << fixed << 
            showpoint <<setprecision(2) << percentage1 << "%)" << endl;
    
    cout << usr2 << " wins: " << wins2 << " times (" << fixed << 
            showpoint << setprecision(2) <<  percentage2 << "%)" << endl;

    if (wins1 > wins2)
    {
        cout << usr1 << " wins the game!" << endl;
    }
    else if (wins1 < wins2)
    {
        cout << usr2 << " wins the game!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
}


// Function to calculate win percentage
float calculateWinPercentage(int wins, int numRounds) 
{
    return static_cast<float>(wins) / numRounds * 100.0f;

}
