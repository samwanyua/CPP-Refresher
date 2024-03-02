/*
Pointers to structures
    - create struct variable, create a pointer, point it 
    and use the pointer to take input and display output
*/
#include <string>
#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};


int main(){
    Person p1;


    // cout << "Enter details of person as name, age and salary" << endl;
    // cin >> p1.name;
    // cin >> p1.age;
    // cin >> p1.salary;

    //details
    // cout << "Name: " << p1.name << " ";
    // cout << "Age: " << p1.age << " ";
    // cout << "Salary: " << p1.salary << endl;

    //creating pointers
    Person *ptr = &p1;
    cout << "Enter details of person as name, age and salary" << endl;
    cin >> ptr->name;
    cin >> ptr->age;
    cin >> ptr->salary;

    cout << "Name: " << ptr->name << " ";
    cout << "Age: " << ptr->age << " ";
    cout << "Salary: " << ptr->salary << endl;
    return 0;
}