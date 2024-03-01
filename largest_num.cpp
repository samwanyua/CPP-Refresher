/*
Which is the largest number of 3 given numbers
*/

#include <iostream>
using namespace std;

int main(){

    int x,y,z;
    cout << "Enter 3 numbers" << endl;
    cin >> x >> y >> z;

    if(x > y && x > z){
        cout << x << " is the largest"  <<  endl;
    }
    else if(y > x && y > z){
        cout << y << " is the largest" <<   endl;
    }
    else{
        cout << z << " is the largest" <<   endl;
    }


    return 0;
}