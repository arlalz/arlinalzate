/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(const char [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    string key,
           answers,
           score;
     int    size = 20;
    char ansKey[size],
         usrAns[size],
         usrKey[size];
    float pRight;
    
    //Initialize or input i.e. set variables valeu
    read(ansKey, key);
    read(usrAns, answers);
    
    //Score the exam 
    pRight = compare(ansKey, usrAns, score);
    
    //Display the outputs
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(usrKey);
    cout<<"Percentage Correct = "<<(pRight/score.size())*100<<"%"<<endl;
}

void print( char &input[])
{
   
    for (int i = 0; i < 20; i++)
    {
        cout <<input[i] << " ";
    }
    cout << endl;
}
void read(const char name[],string & input)
{
    for (int i = 0; i < 20; i++)
    {
        name[i] = input;
    }
}
int  compare(const string &,const string &,string &)
{
    
}

/*
 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose: Compare the answer sheet to the key
 *          and grade
 

//System Libraries
#include <iostream>  //Input/Output Library
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(const char [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char key,answers,SIZE;
    int score;
     char key[SIZE];
     char ans[SIZE];
    char score[SIZE];
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(Key);
    read(Ans);
    
    //Score the exam
    pRight=compare(key,ans,score, score);
    
    //Display the outputs
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}
void print( char &ary[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout >> ary[i];
    }
}
void read( char ary[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cin >> ary[i];
    }
}
int  compare( char &key[] , char &ans[] ,char  &score[], int &score)
{
    score = 20
    for (int i = 0; i < 20; i++)
    {
                if (key[i] = ans[i]
                {
                    score[i] = 'C'
                }
                else 
                {
                    score[i]= 'W'
                    score--;
                }
    }
    return score/20;
}
 */
    