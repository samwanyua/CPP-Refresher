/*
Check if an year is a leap  year or not
- Every leap year is always divisible by 4
- if year is divisible by 100 and 400 both then a leap year
- if year is not divisible by 100 then leap year
*/
#include <iostream>

using namespace std;

int main(){
    int year;

    cout << "Enter an year to check if it is a leap year or not" << endl;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    }
    else{
        cout << year << " is not a leap year." << endl;

    }
    return 0;
}