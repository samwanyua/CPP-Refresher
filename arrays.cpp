#include <iostream>

int main(){
    //arrays - store many values at a time

    int marks[50];
    int markStudent[] = { 2,3,4,5,6,7,8,9};

    //accessing individual element
    std::cout << markStudent[3] << std::endl;

    //index = actual size - 1
    //changing an element
    markStudent[3] = 23;
    std::cout << markStudent[3] << std::endl;

    //Quiz on array
    int numbers[10] = {2,3,4,5};
    std::cout << numbers[9] << std::endl; //remaining portions are 0 automatically

    //4[number] == number[4] // they are the same
    


    



    return 0;
}