/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created on February 7, 2024, 2:09 PM
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
    int tblProd[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tblProd,ROWS);
    
    //Display the outputs
    prntTbl(tblProd,ROWS);

    //Exit stage right or left!
    return 0;
}
void fillTbl(int tblProd[][COLS],int ROWS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int z = 0; z < COLS ; z++)
        {
            tblProd[i][z] = (i + 1)  * (z + 1) ;
        }
    }
}
void prntTbl(const int tblProd[][COLS],int ROWS)
{
    cout << "Think of this as a Product/Muliplication Table" << endl 
         << setw(11) << " " << "C o l u m n s" << endl
         << setw(5)  << " " << "|";
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
       for (int j = 0; j < ROWS; ++j)
    {
        if (j == 1 ){
            cout << "R " << setw(2) << (j + 1 ) << " |";
        } else if (j == 2){
            cout << "O " << setw(2) << (j + 1) << " |";
        }else if (j == 3){
            cout << "W " << setw(2) << (j + 1 ) << " |";
        }else if (j == 4){
            cout << "S " << setw(2) << (j + 1) << " |";
        }else 
        {
            cout << setw(4) << j + 1 << " |";
        }
        for (int x = 0; x < COLS; ++x)
        {
           cout << setw(4) << tblProd[j][x];
        }
        cout << endl; 
    }
}