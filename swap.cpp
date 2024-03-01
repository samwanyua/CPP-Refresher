/*
Write a program that swap 2 variables values with and without a third variable

*/
#include <iostream>
using namespace std;

int main(){
    int a = 234;
    int b = 2;
    int temp;
    //assignment is from right to left
    temp = a;
    a = b;
    b = temp;

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;


    //without a 3rd variable
    int x = 23;
    int y = 10;

    x = x + y;
    y = x -y;
    x = x - y;

    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;


    return 0;
}