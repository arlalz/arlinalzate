
/* 
 * Author: Arlin Alzate
 *
 * Created on February 5, 2024, 2:18 PM
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const int COLS=6;
//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution begins here!

int main(int argc, char** argv) {
    
    //Initialize Random Seed once here!
    
    //Declare Variables
    int option;
    
    //Initialize Variables
    cout << "What problem would you like to see?";
    cin >> option;
    
    switch(option)
            case 1:
                    //Declare Variables
                     const int ROWS = 6;
                     int tablSum[ROWS][COLS];
    
                    //Initialize or input i.e. set variable values
                    fillTbl(tablSum,ROWS);
    
                    //Display the outputs
                    prntTbl(tablSum,ROWS);

                break;
            default:
                break;
                
    //Exit the program            
    return 0;
}

void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);
