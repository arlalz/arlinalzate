/* 
 * Author: Arlin Alzate
 * Created on  Feb 4 
 * Purpose:  Find Min and Max between three numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int one ,int two ,int three,int& max,int& min);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
   int one, two, three, min, max;
    
    //Initialize Variables
    max = min = one = two = three = 0;
    cout << "Input 3 numbers" << endl;
    cin>>one>>two>>three;
    
    //Process/Map inputs to outputs
    
    //Output data
  minmax(one,two,three,max,min);
   cout << "Min = " << min << endl
        << "Max = " << max;
    //Exit stage right!
    return 0;
}

void minmax(int one ,int two ,int three,int& max,int& min)
{
    if (one > two)
    {
        if (one < three)
        {
            max = three;
        } else if (one > three)
        {
            max = one;
        }
    }
    else if (one < two)
    {
        if (two < three)
        {
            max = three;
        } else if (two > three)
        {
            max = two;
        }
    }
    //If statements for Min
    if (one > two)
    {
        if (two < three)
        {
            min = two;
        } else if (two > three)
        {
            min = three;
        }
    }
    else if (one < two)
    {
        if (one < three)
        {
            min = one;
        } else if (one > three)
        {
            min = three;
        }
    }
}