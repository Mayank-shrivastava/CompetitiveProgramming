#include<iostream>
using namespace std;

// passing array to function in cpp
// keep in mind always pass array with length in the function because arrays are pass by reference in cpp
// when we only pass arr[] to a function it is actually pointer address and while calculating size in the
// function we get random output mostly
void func(int arr[], int n) {
    cout << "size of array outside function: " << n << endl; 
    int size = sizeof(arr)/sizeof(int); //not possible to do this 
    cout << "size of array inside function: "  << size << endl;
}

int main() {
    int b[5] = {1,2,3,4,5};
    int a[100] = {1,2,3}; // create extra buckets use less rest values are assigned with 0 default
    // assign value through index in the array
    cout << "Before initialization: " << a[10] << endl;
    a[10] = 20;
    cout << "After initialization: " << a[10] << endl;

    // display data from array
    for (int i = 0; i < sizeof(b)/sizeof(int); i++) {
        cout << b[i] << " ";
    }

    int c[] = {1,2,3,4,5}; // skip the size

    func(a, 100);

    return 0;
}