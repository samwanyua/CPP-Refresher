/*
Exception handling
    - Is an unexpected problem that arises during the execution of a program
    - Exception handling provides way to transfer control from one part of a 
    program to another. It makes it easy to separate the error handling code from 
    code writtend to handle the actual functionality of the program

    - key words: try, catch and throw

    -try: a block of code which may cause an exception is placed here
    
    -catch : catches the exception thrown from the try block

    - throw: throws an exception when a problem shows up
    - every try catch should have a corresponding catch block. A single
    try can have multiple catch blocks

*/

#include <iostream>
using namespace std;

int main(){
    int numerator, denominator,result;

    cout << "Enter numerator and denominator: " << endl;
    cin >> numerator >> denominator;

    try{
        if(denominator == 0)
            throw denominator;
        result = numerator / denominator;
    }
    catch(int ex){ //ex == exception
        cout << "Exception: Division is not allowed " << endl;
    }
    cout << "Division is " << result << endl;

    return 0;
}