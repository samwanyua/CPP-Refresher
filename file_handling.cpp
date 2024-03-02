/*
File handling
    - files are store data permanently
    - stream is an abstraction that represent a device on which input 
    and output operations are performed
    - stream can be basically represented as a source or destination of 
    characters of indefinite length

    - ofstream : rep output file stream and is used to create files and
    to write information to files
    -ifstream: rep input file stream and is used to read info from files

    - fstream - has capabilities of both ofstream and ifstream - can create files, write
    info to files and read info from files




*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char arr[100];
    cout << "Enter your name and age" << endl;
    cin.getline(arr, 100);

    //create a file
    fstream myfile("sample.txt",ios::out | ios::app); 
    // ofstream myfile("sample.txt",ios::app); 
    /*ios::app -> append mode 
    ios::in -> input operation - taking input from a file
    ios::out -> output operation - writing something to the file (default)
    ios::ate -> take to the end of file

    */

    //file  write operation
    // myfile.open("sample.txt"); //ofstream opens the file by default
    myfile << arr;
    myfile.close();
    cout << "File write operation performed successfully" << endl;


    //Read operation
     cout << "File reading operation started" << endl;
     char array1[100];
    ifstream object("sample.txt"); //object is a variable name
    object.getline(array1,100);
    cout << "Array content: " << array1<< endl << endl;
    cout << "File read operation performed successfully" << endl;
    object.close();


    return 0;
}