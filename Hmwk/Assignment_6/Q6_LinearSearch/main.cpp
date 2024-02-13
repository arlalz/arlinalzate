/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created on: February 7,2024  8:42 PM
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    fillAry(array,SIZE);
    
    //Display the outputs
    if(linSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}

void fillAry(int array[],int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }
}
void prntAry(int array[],int SIZE,int num)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
        if ((i + 1) % num == 0 )
        {
            cout << endl;
        }
    }
}
bool linSrch(int array[],int SIZE,int val,int& index)
{
    int i = 0;
    bool found = false;
    while (i < SIZE && !found)
    {
        if (array[i] == val)
        {
            found = true;
            index = i;
        }
        i++;
    }
    return found;
}