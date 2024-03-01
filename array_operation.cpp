/*
Array operations - addition, subtraction,multiplication
int a[] = {1,3,5};
int b[] = {2,4,6};
int add[]= {3,7,11};
int minus[]= {-1,-1,-1};
int multiply[] = {2,12,30};
*/
#include <iostream>
using namespace std;
int main(){

    int array1[4];
    int array2[4];
    int add[4],sub[4],mul[4];

    cout << "Enter 4 integers for array1" << endl;
    for(int i= 0; i < 4; i++){
        cin >> array1[i];
    }
    cout << "Enter 4 integers for array2" << endl;
    for(int i= 0; i < 4; i++){
        cin >> array2[i];
    }
    for(int i= 0; i < 4; i++){
        add[i] = array1[i] + array2[i];
        cout << "Addition " << add[i] << endl;
    }
    for(int i= 0; i < 4; i++){
        mul[i] = array1[i] * array2[i];
        cout << "Multiplication " << mul[i] << endl;
    }
    for(int i= 0; i < 4; i++){
        sub[i] = array1[i] - array2[i];
        cout << "Subtraction " << sub[i] << endl;
    }
    
    


    return 0;
}