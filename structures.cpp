/*
Structures (objects in js)/structs
    - structure: group of data elements grouped together under one name
    data elements == members... they have different types and different lengths
    - It is a user-defined data type which allows you to combine items of different kinds
*/
#include <iostream>
using namespace std;

//create a struct
struct Person{
    char name[100];
    int age;
    double salary;
};
int main(){
    Person p1;
    cout << "Person Details" << endl << "Enter Person name: " << endl;
    cin.getline(p1.name, 100);

    cout << "Enter age" << endl;
    cin >> p1.age;

    cout << "Enter salary" << endl;
    cin >> p1.salary;

    cout << p1.name << endl;
    cout << p1.age << endl;
    cout << p1.salary << endl;

    return 0;
}