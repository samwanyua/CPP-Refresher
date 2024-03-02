/*
Function overloading
    - is a feature where two or more functions can have the 
    same name but different parameters
    - is an example of polymorphism in c++
Rules for function overloading
    - different parameter types
    - different number of parameters
    - different sequence of parameters

example
    void print();
    void print(int a);
    void print(float a);

    void print(int a, int b); 
    void print(int a, double b); //different sequece
    void print(double a, int b); //different sequece

    - application: printing different values depending on what the user passes
    instead of creating many different functions with same functionality

*/
#include <iostream>
using namespace std;

//function 1
int add(int a, int b){ 
    cout << "Function 1 is being called" << endl;
    return ( a + b);
}

//function 2
double add(double a, double b){ 
    cout << "Function 2 is being called" << endl;
    return (a + b);

}

//function 3
int add(int a, int b, int c){
    cout << "Function 3 is being called" << endl;
    return a + b + c;
}

//function 4
double add(int a, double b){
    cout << "Function 4 is being called" << endl;
    return a + b;
}

//function 5
double add(double a, int b){
    cout << "Function 5 is being called" << endl;
    return a + b;
}

int main(){
    cout << add(1,3) << endl;
    cout << add(1.1,3.3) << endl;
    cout << add(1,3,3) << endl;
    cout << add(1,3.3) << endl;
    cout << add(1.9,3) << endl;

    return 0;
}