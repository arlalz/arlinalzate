/* 
 * File:   main.cpp
 * Author: Arlin ALzate
 * Created on: February 7, 9:42 PM
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int array[],int SIZE);
void prntAry(int array[],int SIZE,int num);
void bublSrt(int array[],int SIZE);
bool binSrch(int array[],int SIZE,int val,int& indx);

//Execution Begins Here!
int main(int argc, char** argv){
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
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
    cout << endl;
}
void bublSrt(int array[],int SIZE)
{
    
    for (int maxI = SIZE - 1; maxI > 0; maxI--)
    {
        for ( int i = 0; i < maxI; i++)
        {
            if (array[i] > array[i +1])
            {
                //swap
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

bool binSrch(int array[],int SIZE,int val,int& indx)
{
    int left = 0;
    int right = SIZE - 1;

    // do not go above array size, remeber pairs
    //while loop becasue i need it to run based off condition
    while (left <= right) 
    {
        // cen for center
        int cen = left + (right - left) / 2;
        // Check if val is present at mid
        if (array[cen] == val) 
        {
            indx = cen;
            return true;
        }
        // val is greater, ignoring left 
        if (array[cen] < val) {
            left = cen + 1;
        }
        // val is smaller, ignoring right
        else {
            right = cen - 1;
        }
    }
    // the return inside works liek break, so this only goes if condition is not met
    return false;
}