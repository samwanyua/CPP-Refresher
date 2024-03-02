/*
Pointers - is a variable whose value is the address of another variable
uses: 
    - allows you to refer to some space in memory from multiple locations.
    You can update memory in one location and changes can be seen from
    another location in your program.
    - dynamic memory allocation
*/
#include <iostream>
using namespace std;

int main(){

    int var = 5;
    //datatype pointerName
    int *pInt; // pointer to an integer
    float *pFloat; //pointer to a float

    //store address
    pInt = &var;

    cout << "Variable value: " << var << endl;
    cout << "Pointer pointing to a value: " << *pInt << endl;
    cout << "Address in a pointer: " << pInt << endl;

    //changing value using a pointer
    *pInt = 423;
    cout << endl;
    cout << "Variable value: " << var << endl;
    cout << "Pointer pointing to a value: " << *pInt << endl;
    cout << "Address in a pointer: " << pInt << endl;



    return 0;
}