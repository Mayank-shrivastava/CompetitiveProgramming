#include <iostream> // header file of standard input output
using namespace std;     // standard namespace

void func1()
{
    cout << "Hello from func1" << endl;
}

void swapByCallByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swapByCallByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    //- I/O operations in c++ uses the stream(series of byte) concept.
    //- variables
    //- datatypes
    // int, char, float, double, long
    // access modifier for these datatypes
    // short int, long long int etc
    // size of int -> 4 byte
    // cout << sizeof(int) << endl; // 4byte
    // cout << sizeof(char) << endl;// 1byte
    // cout << sizeof(short int) << endl; //2byte
    // operators are simple
    // if-else simple
    // loops are simple [for, while,do while]
    // break, continue statements
    // switch cases
    // ternary operator
    // goto statement => not used much

    // functions in cpp
    // library functions and user defined functions
    // func1(); // demo function user defined functions

    // call by value and call by reference in c++
    // reference variables in c++
    // int a = 10;
    // int& reference_a = a; // reference_a stores address of a
    // int b = a; // non reference variable
    // cout << a << endl;
    // cout << reference_a << endl;
    // cout << b << endl;
    // // if i change the value of a
    // a = 122;
    // // does the value of reference_a changes or not? yes its changes
    // // because both a and reference_a points to same address location
    // // if i change the value at particular address so all the variables
    // // pointing to that address will have new updated value
    // cout << a << endl;
    // cout << reference_a << endl;
    // cout << b << endl;

    // now understand call by value of call by reference

    int x = 10;
    int y = 20;
    swapByCallByValue(x, y); // no effect after swapping
    cout << x << " " << y << endl;
    swapByCallByReference(x, y); // successfull in swapping
    cout << x << " " << y << endl;

    // multi-d
    int **arr = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // cout << "Hello world" << endl;
    return 0;
}

// pointers in cpp : https://www.youtube.com/watch?v=zuegQmMdy8M
// oops in cpp : https://www.youtube.com/watch?v=mlIUKyZIUUU