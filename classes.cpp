/*
Procedural oriented programming paradigm
    - list of instructions for a computer to follow
    - Group  of similar tasks are organized as functions
    - Most functions share global data
    - Data is publily available - low security

Object Oriented programming paradigm
    - Emphasis on data more than procedure
    - Programs are divided into objects
    - Data structures are designed such that they characterize  the objects
    - Functions that operate on the data of an object are tied together in that same data structure
    - Data is hidden and cannot be directly accessed - more secure

 OOP
    - provides a way of modularizing programs by creating partitioned memory area
    for bot data and functions that can be used as template(class) for creating copies of
    such modules on demand(objects)

Concepts
    - classes & objects
    - data abstraction and encapsulation
    - inheritance
    - polymorphism
    - dynamic binding
    - message passing

*/
#include <iostream>
#include <string>
using namespace std;

class Cars{
    private:
        //data members/variables
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;
    
    public:
        //member functions
        void setData(string c_name, string m_name, string f_type, float _mileage, double _price){
            company_name = c_name;
            model_name = m_name;
            fuel_type = f_type;
            mileage = _mileage;
            price = _price;
        }
        void displayData(){
            cout << "Car company name: "<< company_name << endl;
            cout << "Car model: " << model_name << endl;
            cout << "Car fuel type: " << fuel_type << endl;
            cout << "Car mileage: " <<mileage << endl;
            cout << "Car price: " << price << endl;
        }
};

int main(){
    Cars car1; //objects are variables of type class
    car1.setData("Toyota", "Altis", "Petrol", 15.4, 150000);
    car1.displayData();

    
    return 0;
}