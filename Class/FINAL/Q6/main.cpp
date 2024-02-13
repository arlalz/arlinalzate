/* 
 * File:   main.cpp
 * Author: Arlin Alzate
 * Created on Feb 6 6:17 PM
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */


//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int array[][COLMAX],int &row,int &col);//Prompt for size then table
void sum(const int array[][COLMAX],int row,int col,int augAry[][COLMAX]);//Sum rows,col,grand total
void print(const int tbl[][COLMAX],int row,int col,int set);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}

void read(int array[][COLMAX],int &row,int &col)
{
    cout << "Input a table and output the Augment row,col and total sums." << endl
         << "First input the number of rows and cols. <20 for each" << endl;
         cin >> row >> col;
         cout << "Now input the table." << endl;
         //nested loop for input based of guideline user input (row/col)
         for (int i = 0; i < row; i++)
         {
             for (int j = 0; j < col; j++)
             {
                 cin >> array[i][j];
             }
         }
          
}
void sum(const int array[][COLMAX],int row,int col,int augAry[][COLMAX])
{
    //have to declare and start off, my counter of total
     int tot = 0;

    //rows 
    for (int i = 0; i < row; i++) 
        {
            int rowTot = 0;
            for (int j = 0; j < col; j++) 
            {
                rowTot += array[i][j];
                //filling the added array
                augAry[i][j] = array[i][j];
            }
        // putting the row total to the added collumn (to the right)
        augAry[i][col] = rowTot; 
        tot += rowTot;
        }

    // columns
    for (int j = 0; j < col; j++) 
        {
            int colTot = 0;
            for (int i = 0; i < row; i++)
            {
                colTot += array[i][j];
            }
        // column tot to added row
        augAry[row][j] = colTot; 
        }
     
    augAry[row][col] = tot;
}
void print(const int tbl[][COLMAX],int row,int col,int set)
{
    //nested loop for the 2d array
    for (int i = 0; i < row; i++)
         {
             for (int j = 0; j < col; j++)
             {
                 cout << setw(set) << tbl[i][j];
             }
             //after the row enter
             cout << endl;
         }
        
}