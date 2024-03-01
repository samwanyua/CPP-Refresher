#include <iostream>

int main(){
    //2D Strings

    int matrix[4][3] ={ // [4] -> rows , [3] -> column
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    //accessing values
    std::cout << matrix[3][2] << std::endl;

    //looping through an array
    for(int i =0; i <= 3; i++){
        for(int j = 0; j <=2; j++){
            std::cout << matrix[i][j] << std::endl;
        }
    }
    return 0;
}