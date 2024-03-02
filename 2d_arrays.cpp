/*
2D - arrays -> take input, display output, addition, subtraction
*/
#include <iostream>
using namespace std;

int main(){
    int myArray[2][2]; //declaration
    int myArray2[2][2] = {1,2,3,4}; // declaration with initialization
    
    int myArray3[3][3] = {{2,3,4},{5,6,7}, {33,234,43}}; // declaration with initialization

    for(int i=0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << myArray3[i][j] << " ";
        }
        cout << endl;
    }

    //taking an input 
    cout << "Enter values for a 2 x 2 matrix" << endl;
    for(int i=0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> myArray[i][j];
        }
        cout << endl;
    }
    cout << "Values for a 2 x 2 matrix" << endl;
    for(int i=0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }

    //operation
    int A[3][3],B[3][3],addition[3][3], subtraction[3][3];
    //input for A and B
    cout << "Enter values for a 3 x 3 matrix" << endl;
    for(int i=0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << "Enter values for a 3 x 3 matrix" << endl;
    for(int i=0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> B[i][j];
        }
        cout << endl;
    }

    // Display matrices A and B

    cout << "Matrix A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix B:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    //Addition
    for(int i=0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            addition[i][j] = A[i][j] + B[i][j];
        }
        cout << endl;
    }
    //Subtraction
    for(int i=0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            subtraction[i][j] = A[i][j] - B[i][j];
        }
        cout << endl;
    }
    //results
    cout << "Results for addition" << endl;
    for(int i=0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           cout << addition[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Results for subtraction" << endl;
    for(int i=0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << subtraction[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}