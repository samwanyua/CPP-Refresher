/*
Functions
  - group of program statements with a unique name that perform specific task
  - provide modularity and reusability to a program
  - types :
        * user- defined functions
        * library/predefined functions
    
    function name and parameter -> function signature
*/

#include <iostream>
using namespace std;

int largestNum(int a, int b){
   return (a > b) ? a : b;
}

void sayHi(){
    cout << "Hello! Hope you're well" << endl;
}

int main(){

    cout << largestNum(23,43) << endl;
    sayHi();

    return 0;
}