/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created on February 7, 2024, 5:35 PM
 * Purpose: Calculate the Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float test[],int SIZE);//Initialize the array
void  print(float test[],int SIZE,int NUM);//Print the array
float avgX(float test[],int SIZE);//Calculate the Average
float stdX(float test[],int SIZE);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    cout<< fixed << setprecision(7) 
        << "The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

void  init(float test[],int SIZE)//Initialize the array
{
    for (int i = 0; i < SIZE; i++)
    {
        cin >> test[i];
    }
}
void  print(float test[],int SIZE,int NUM)//Print the array
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << fixed << setprecision(7) << test[i] << endl;
    }
}
float avgX(float test[],int SIZE)//Calculate the Average
{
    float tot = 0.0f;
    for (int i = 0; i < SIZE; i++)
    {
        tot += test[i];
    }
    float avg = tot / static_cast<float>(SIZE);
    return avg;
}
float stdX(float test[],int SIZE)//Calculate the standard deviation
{
    //rtr coem from Numerator - top part of fractions 
    float rtr = 0.0f;
    
    // this is for the Summation 
    for (int i = 0; i < SIZE; i++) {
        rtr += (test[i] - avgX(test, SIZE)) * (test[i] - avgX(test, SIZE));
    }
    return sqrt(rtr / (SIZE - 1));
}