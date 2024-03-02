/*
Dynamic memory allocation
    - allows you to set array size dynamically during runtime rather 
    than at compilation time.
    - it help when the program doesn't know in advance the number of items to be stored
*/
#include <iostream>
using namespace std;

int main(){
    int size;
    int *pSize;

    cout << "Enter the number of values you want to store"<< endl;
    cin >> size;

    pSize = new int [size];

    cout << "Enter values to be stored in an array" << endl;
    for(int i = 0; i < size; i++){
        cin >> pSize[i];
    }
    cout << "Values of your array" << endl;
    for(int i = 0; i < size; i++){
        cout << pSize[i] << " " ;
    }
    cout << endl;
    return 0;
}