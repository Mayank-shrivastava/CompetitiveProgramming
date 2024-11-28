#include<iostream>
using namespace std;


// how to pass 2 d array in function
// with fixed rows and columns
void pass2dArrayWithFixParam(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// with variable rows and columns
void pass2dArrayWithVariableParam(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main () {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    // we can skip rows in the 2 d array in cpp as they are store in 
    // row major form in the memory
    int arr1[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //pass2dArrayWithFixParam(arr, 2);
    int** arr2 = new int*[2]; // double pointer of a single pointer
    for (int i = 0; i < 2; i++) {
        arr2[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            arr2[i][j] = i * 3 + j + 1;
        }
    }
    pass2dArrayWithVariableParam(arr2, 2, 3);
      // Deallocate memory
    for (int i = 0; i < 2; i++)
    {
        delete[] arr2[i];
    }
    delete[] arr2;
    return 0;
}