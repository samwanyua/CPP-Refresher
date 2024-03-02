/*
structures(structs) arrays
    create an array of structs and accept input and display output
    datamembers - age, name, salary
*/
#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name; //custom data type
    int age;
    double salary;
};



int main(){
    Person p[2]; //for like  multiple people
    cout << "Enter person's details like name, age, salary" << endl;

    for(int i=0; i < 2; i++){
        cout << "Enter person's details of person " << i+1 << endl;
        cin >> p[i].name;
        cin >> p[i].age;
        cin >> p[i].salary;
    }
    cout << endl;

    //details
    for(int i=0; i < 2; i++){
        cout << p[i].name << " ";
        cout << p[i].age << " ";
        cout << p[i].salary << endl;
    }
    cout << endl;
    return 0;
}