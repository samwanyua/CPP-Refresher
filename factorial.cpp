/*
Calculating factorial of a number
example. 5! = 5 * 4 *3 *2 *1
*/
#include <iostream>

using namespace std;

int main(){
    int factorial, x;
    cout << "Enter a number to calculate a factorial" << endl;
    cin >> x;
    factorial = 1;

    /*
    //This will also work
    while(x > 1){
        x--;
        factorial = factorial * x;
    }*/

    for(int i = x; i > 1;  i-- ){
        factorial = factorial * i;
    }
    cout << factorial << endl;

    return 0;
}