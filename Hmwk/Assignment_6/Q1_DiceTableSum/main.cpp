/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created: February 5, 2023
 * Purpose:  Create a 6x6 2D-Table that holds the sum of the rows and columns using values 1 to 6.  
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}
void fillTbl(int tablSum[][COLS],int ROWS)
{
    for (int i = 0; i < ROWS + 1 ; i++)
    {
        for (int z = 0; z < COLS + 1 ; z++)
        {
            tablSum[i][z] = i + z + 2;
        }
    }
}
void prntTbl(const int tablSum[][COLS],int ROWS)
{
    //Top part
     cout << "Think of this as the Sum of Dice Table" << endl
          << setw(11) << " " << "C o l u m n s" << endl;
          cout << setw(5) << " " << "|";
    for(int i = 1; i <= COLS; ++i)
    {
        cout << setw(4) << i;
    }
          cout << endl;
     for (int p = 0; p < 34; p++)
     {
         cout << "-";
     }
          cout << endl;
       
       
          // Bottom Part
    for (int j = 0; j < ROWS; ++j)
    {
        if (j == 1 ){
            cout << "R " << setw(2) << (j + 1 ) << " |";
        }else if (j == 2){
            cout << "O " << setw(2) << (j + 1) << " |";
        }else if (j == 3){
            cout << "W " << setw(2) << (j + 1 ) << " |";
        }else if (j == 4){
            cout << "S " << setw(2) << (j + 1) << " |";
        }else {
            cout << setw(4) << j + 1 << " |";
        }
        for (int x = 0; x < COLS; ++x)
        {
           cout << setw(4) << tablSum[j][x];
        }
        cout << endl; 
    }
}