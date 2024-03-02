/*
Inline functions and default parameters
    - If a function is inline, the compiler places a copy of the code
    of that function at each point where the function is called at compile time. it is copied in main function

    - any change to an inline function could require the function to be recompiled
    as  the compiler needs to replace all the code once again otherwise it will
    continue with old functinality

    syntax
    inline return-type function-name(parameters){
        //function code
    }

    -  inline there is no control transfer

    -  in normal functions there is control transfer, many control transfers creates overheads
    thus the program becomes slow.

    default arguments - a value provided in function declaration that is automatically
    assigned by the compiler if the caller of the function doesn't provide
    a value for the argument with the default value

*/
#include <iostream>
using namespace std;
//default params should start from right to left
inline int add( int a, int b, int c =453, int d = 5){
    return a + b + c + d;
}
int main(){
    cout << add(4,3) << endl; /* Compiler replaces the function call with the body of the inline function*/

    return 0;
}