/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 *
 * Created on February 10, 2024, 3:18 PM
 * Purpose: To emulate a Pirinola Game, where the user inputs names and rounds
 *          are desired to be played. 
 * 
 */

//System Level Libraries
#include <iostream> //in/out put
#include <iomanip>  // styling
#include <ctime>    //seeding time
#include <vector>   //usr chips

using namespace std;

// Function prototypes
void  piriGm(const string& usr1, const string& usr2, int numRounds);
float calcWin(int wins, int numRounds);
void  winDin(int &wins1, int &wins2,const string& usr1, const string &usr2);
void  chpShw(const string&usr1, const string &usr2, int &pot, vector<int> &chips);
void  prcn(const string &usr1, const string &usr2, int &wins1, int &wins2, float percentage1, float percentage2);
void  display();
void  style();


int main(int argc, char** argv) {
    
    //Seeding Time
    srand(static_cast<unsigned int>(time(0)));

    // Declare variables
    string usr1, usr2;
    
    //both players have ten chips to start off with
    vector<int> chips(2, 10);
    int numRnd;
    
    
    // info and game instructions
    
    //starting them off, linux puts in random values
     numRnd = 0;
     
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
    while (!(numRnd >= 1))
    {
    cin >> numRnd;
    } 

    // Start the game
    piriGm(usr1, usr2, numRnd);

    return 0;
}

//Function defining
void style()
{
    for (int  i = 0; i < 100; i++)
     {
         cout << "~";
     }
}

// Function to play the Pirinola game
void piriGm(const string& usr1, const string& usr2, int numRnd) 
{
    // Initialize variables
   vector<int> chips(2, 10); 
    int pot = 0;
    bool pPlay = true;
    // Number of wins for each player
    int wins1 = 0, 
       wins2 = 0; 

    for (int round = 1; round <= numRnd; round++) 
    {
        cout << endl << "Round: " << round << "/" << numRnd << endl;

        // Reset chips and pot for each round
        chips[0] = chips[1] = 10;
        pot = 0;

        do 
        {
            // Player 1's turn
            char spin = rand() % 6 + 1;
            
            switch (spin) 
            {
                case 1:
                    cout << endl << "TAKE ONE!" << endl
                         << "Every players takes one chip from the pot." << endl;
                    chips[0]++;
                    chips[1]++;
                    pot -= 2;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                case 2:
                 cout << endl <<"Take TWO!" << endl 
                      << "Every player takes two chips from the pot" << endl;
                    chips[0] += 2;
                    chips[1] += 2;
                    pot -= 4;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                case 3:
                    cout << endl << "TAKE EVERYTHING!" << endl 
                         << "Player takes all chips from the pot" << endl; 
                    chips[0] += pot;
                    pot = 0;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                case 4:
                    cout << endl <<"Put ONE!" << endl
                         << usr1 << " puts one chip in the pot" << endl; 
                    chips[0]--;
                    pot++;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                case 5:
                    cout << endl << "Put TWO!" << endl
                         << usr1 << " puts two chips in the pot" << endl;
                    chips[0] -= 2;
                    pot += 2;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                    
                case 6:
                    cout << endl << "Everyone PUTS!" << endl
                         << "Everyone puts two chips in the pot" << endl;
                    chips[0] -= 2;
                    chips[1] -= 2;
                    pot += 4;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
            }

            // Player 2's turn
            spin = rand() % 6 + 1;
            
            switch (spin) 
            {
                case 1:
                 cout << endl << "TAKE ONE!" << endl
                     << "Every players takes one chip from the pot." << endl;   
                    chips[0]++;
                    chips[1]++;
                    pot -= 2;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                case 2:
                 cout << endl <<"Take TWO!" << endl 
                      << "Every player takes two chips from the pot" << endl;   
                    chips[0] += 2;
                    chips[1] += 2;
                    pot -= 4;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                    
                case 3:
                    cout << endl << "TAKE EVERYTHING!" << endl 
                         << "Player takes all chips from the pot" << endl; 
                    chips[1] += pot;
                    pot = 0;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                    
                case 4:
                    cout << endl <<"Put ONE!" << endl
                         << usr1 << " puts one chip in the pot" << endl; 
                    chips[1]--;
                    pot++;
                    chpShw(usr1, usr2,pot, chips);
                    break;
                case 5:
                    cout << endl << "Put TWO!" << endl
                         << usr1 << " puts two chips in the pot" << endl;
                    chips[1] -= 2;
                    pot += 2;
                    chpShw(usr1, usr2,pot,  chips);
                    break;
                case 6:
                    cout << endl << "Everyone PUTS!" << endl
                         << "Everyone puts two chips in the pot" << endl;
                    chips[0] -= 2;
                    chips[1] -= 2;
                    pot += 4;
                    chpShw(usr1, usr2,pot, chips);
                    break;
            }
            
            if (pot <= 0)
                {
                pPlay = false;
                 // If pot is empty, the player with more chips wins
                    if (chips[0] > chips[1])
                        {
                            wins1++;
                        }
                    else if (chips[1] > chips[0])
                        {
                             wins2++;
                         }
                    else
                     {
                         // If both players have the same number of chips, it's a tie
                         cout << "Round ended in a tie!" << endl;
                    }
                }
            
        } while ((chips[0] > 0 || chips[1] > 0) && pPlay);
    }
     
    // calling the function to do the math
    float percentage1 = calcWin(wins1, numRnd);
    float percentage2 = calcWin(wins2, numRnd);

    // final points with percentages
    style();
   
    
    prcn(usr1, usr2, wins1, wins2, percentage1, percentage2);

    winDin(wins1, wins2, usr1, usr2);
}

// Function to calculate win percentage
float calcWin(int wins, int numRnd) 
{
 
    return static_cast<float>(wins) / static_cast<float>(numRnd) * 100.0f;

}


void  winDin(int &wins1, int &wins2,const string& usr1, const string &usr2)
{
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

void  chpShw(const string&usr1, const string &usr2, int &pot, vector<int> &chips)
{
    // after each move
        cout << usr1 << "'s chips: " << chips[0] << endl;
        cout << usr2 << "'s chips: " << chips[1] << endl;
        cout << "Pot: " << pot << " chips" << endl;
}

void  prcn(const string &usr1, const string &usr2, int &wins1, int &wins2, float percentage1, float percentage2)
{
    cout << endl << "Final Results:" << endl;
    cout << usr1 << " wins: " << wins1 << " times (" << fixed << 
            showpoint <<setprecision(2) << percentage1 << "%)" << endl;
    
    cout << usr2 << " wins: " << wins2 << " times (" << fixed << 
            showpoint << setprecision(2) <<  percentage2 << "%)" << endl;
}