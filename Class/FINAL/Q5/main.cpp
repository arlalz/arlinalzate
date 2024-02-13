/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created on Feb 7, 2024
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}


void read(vector<int> & even, vector<int> &odd)
{
    cout << "Input the number of integers to input." << endl;
    int max;
    cin >> max;
    cout << "Input each number." << endl;
    for (int i = 0; i < max; i++)
    {
        int num;
        cin >> num;
        if ( num % 2 == 0)
        {
            even.push_back(num);
        }
        else
        {
            odd.push_back(num);
        }
    }
            
}
void copy(vector<int> even, vector<int> odd ,int array[][COLMAX])
{
      for (int i = 0; i < even.size(); ++i) {
        array[i][0] = even[i]; 
    }

   
    for (int i = 0; i < odd.size(); ++i) {
        array[i][1] = odd[i];
    }
}
void prntVec(vector<int> even, vector<int> odd,int num)//int num is the format setw(n)
{
    cout << setw(num) << "Vector" << setw(num) << "Even" << setw(num) << "Odd" << endl;
   
   int maxSize;
    int two = even.size();
    int one = odd.size();
    
    if (one > two)
        {
         maxSize = one;
        }
    else 
        {
            maxSize = two;
        }

    for (int i = 0; i < maxSize; i++) {
     
        if (i < two) 
        {
            cout << setw(num * 2) << even[i];
        } else 
        {
            cout << setw(num * 2) << " ";
        }
        
        if (i < one) 
         {
            cout << setw(num) << odd[i];
            } 
        else 
             {
            cout << setw(num) << " ";
            }

        cout << endl;
    }
}
void prntAry(const int array[][COLMAX],int evenSize,int oddSize,int num)
{
        cout << setw(num) << "Array" << setw(num) << "Even" << setw(num) << "Odd" << endl;

    int maxSize;
    
    if (evenSize > oddSize)
        {
         maxSize = evenSize;
        }
    else 
        {
            maxSize = oddSize;
        }

    for (int i = 0; i < maxSize; i++) 
    {
        if (i < evenSize) 
        {
            cout << setw(num * 2) << array[i][0];
        } else 
        {
            cout << setw(num * 2) << " ";
        }

        if (i < oddSize) 
        {
            cout << setw(num) << array[i][1];
        } 
        else 
        {
            cout << setw(num) << " ";
        }

        cout << endl;
    }
}