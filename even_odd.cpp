/* 
Write a program that checks if a number is odd or even
*/

#include <iostream>
using namespace std;

int main(){

    cout << "Enter a  number: " << endl;
    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is an even number" << endl;
    }
    else{
                cout << number << " is an odd number" << endl;

    }


    return 0;
}