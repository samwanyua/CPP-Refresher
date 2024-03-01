/*
Printing fibonacci  (next value is obtained by adding the first two numbers)
ex. 0,1,2,3,5,8,13,21
*/
#include <iostream>
using namespace std;

int main(){

    int num, first = 0, second = 1, next;

    cout << "Enter the number of terms to be printed in the fibonacci series" << endl;
    cin >> num;

    for(int i=0; i < num; i++){
        cout << first << endl; // 0 .. 1
        next = first + second; // 0 + 1 = 1 .. 1 + 1 =2
        first = second; // 1 ..2
        second = next; //1 .. 2
    }
    return 0;
}
