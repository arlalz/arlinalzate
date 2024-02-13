/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created on Feb 8, 3:25 PM
 * Purpose:  Sorting an array of characters if specified correctly
 */

//System Libraries Here
#include <iostream>//cout,cin
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int  read(char array[]);
void sort(char array[],int sizeIn);
void print(const char array[],int sizeIn);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;//Larger than needed
    char array[SIZE]; //Character array larger than needed
    int sizeIn,sizeDet;//Number of characters to be read, check against length
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of characters and sort"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of characters and determine it's size
    cout<<"Now read the Array"<<endl;
    sizeDet=read(array);//Determine it's size
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size to sort
    if(sizeDet==sizeIn){
        sort(array,sizeIn); //Sort the array
        print(array,sizeIn);//Print the array
    }else{
        cout<<(sizeDet<sizeIn?"Input size less than specified.":
            "Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

int  read(char array[])
{
       cin >> array;
    return strlen(array);
}
void sort(char array[],int sizeIn)
{
    //Max out at 4  because inner is + 1( ex 1)
    for (int i = 0; i < sizeIn - 1; i++) 
    {
        //Max at 3 (ex 1)
        for (int j = 0; j < sizeIn - i - 1; j++) 
        {  
            if (array[j] > array[j + 1]) 
            {
                char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void print(const char array[],int sizeIn)
{
    for (int i = 0; i < sizeIn; i++)
    {
        cout << array[i];
    }
    cout << endl;
}