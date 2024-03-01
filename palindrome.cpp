/*
Checking if a number is a palindrome or not
ex. 121 is 121  - palindrome
123 - 321 - not palindrome

*/

#include <iostream>
using namespace std;
int main(){

    cout << "Enter a number to check if palindrome: " << endl;
    int rev = 0;
    int num;

    cin >> num; //121
    int originalNum = num;

    /*while(num != 0){
         
        rev = (rev * 10) + num % 10; // 0 + 1 = 1 || 10 + 2 = 12 || 120 + 1 === 121
        num /=10; // 12 || 1
    }*/

    for(; num != 0; num /= 10){
        rev = (rev * 10) + num % 10;
    }

    if( originalNum == rev){
        cout << originalNum << " is a palindrome" << endl;
    }
    else{
        cout << originalNum << " is not a palindrome" << endl;
    }

    return 0;
}