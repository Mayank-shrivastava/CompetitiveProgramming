#include<iostream>
using namespace std;

int main () {
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int rows = sizeof(arr)/sizeof(arr[0]); 
    int cols = sizeof(arr[0])/sizeof(int);  
    //cout << rows << " " << cols << endl;
    // wave print output: 1 5 9 10 6 2 3 7 11 12 8 4
    // intuitions: 
    // if col is even print row 1 to rows-1
    // if col is odd print row rows-1 to 1
    for(int col = 0; col < cols; col++) {
        if (col % 2 == 0) {
            // col is even; print in increasing order of rows;
            for(int row = 0; row < rows; row++) {
                cout << arr[row][col] << " ";
            }
    
        } else {
            // col is odd; print in decreasing order of rows;
            for(int row = rows-1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
    return 0;
}