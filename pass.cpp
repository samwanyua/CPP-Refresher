/*
Ways to pass values to a function
    - pass by value
      * call/pass by value method of passing arguments to a function
      copies the actual valuea of an argument into formal parameter of the 
      function
      * changes made to the parameters inside the function have no effect
      on the argument
      * BY default c++ uses call by value to pass arguments. code within a function
      cannot alter the arguments used in the function
   
    - pass by reference
        * copies the reference of an argument into former parameter
        * inside the function, the reference is used to access the actual argument used 
         in the call. Therefore, changes made to the parameter affect the passed argument
        * To pass value by reference, argument reference is passed to the function 
        just like any other value
    
    - pass by address
        * pass by pointer method of passing arguments to a function copies
        the address of an argument into the formal parameter
        * Inside the function the address is used to access the actual argument used in the call.
        changes made to the parameter affect the passed argument
        *  To pass value by pointer, argument pointers are passed to the functions
        just like any other value
*/
#include <iostream>
using namespace std;

//pass by value
void passByValue(int x, int y){
    int z = x;
    x = y;
    y = z;
}

//pass by reference
void passByReference( int &x, int &y){ //x and y refers to  a and b
    int z = x;
    x = y;
    y = z;
}

//pass by address/pointer
void passByAddress(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;

}

int main(){

    int a = 4, b = 6;
    // passByValue(a,b);// no swapping that happens
   
   // passByReference(a,b); //swapping happens
   
    passByAddress(&a,&b); //swapping happens
    cout << "a is: " << a << "  " <<  "b is: " << b << endl; // no swapping that happens
    
     return 0;
}