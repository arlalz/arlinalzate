/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created: February 7, 2023 4:34 PM
 * Purpose:  Reverse the Array
 */

//System Libraries
#include <iostream>  //Input/Output Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  init(int test[],int SIZE);//Initialize the array
void  print(int test[],int SIZE,int num);//Print the array
void  revrse(int test[],int SIZE);//Reverse the array

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
  
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void  init(int test[],int SIZE)//Initialize the array
{
    for (int i = 0; i < SIZE; i++)
    {
           cin >> test[i];
    }
}
void  print(int test[],int SIZE,int num)//Print the array
{
    
        for (int j = 0; j < SIZE; j++)
        {
            cout << test[j] << " ";
            
            //j +1 becauswe at the first num its would world 0 % 0 is 0 so + 1
            if ((j + 1) % num == 0 )
            {
                cout << endl;
            }
        }
       
    
}
void  revrse(int test[],int SIZE)
{ 
    
    for (int i = 0; i <= (SIZE / 2) - 1; i++)
    {   
        //crry is my carrying varibel that hold inbetween switches
        int crry = test[i];
        // size - 1 - i is the number next to test i 
        // think about the 24 pairs based off the outter loop
        test[i] = test[(SIZE - 1) - i];
        //swap the moved up num
        test[(SIZE - 1) - i] = crry;
    }
}