#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// how to pass function to a function 
void bubbleSortUsingSelfCompartor(int arr[], int n, bool (&my_compare)(int a, int b)) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (my_compare(arr[j+1], arr[j])) {
                swap(arr[j+1], arr[j]);
            }
        }
    }
}

void printUsingIterator(auto start, auto end) {
    while(start != end) {
        cout << *start << " ";
        start++;
    }
}

int main () {
    // int arr[] = {4,3,5,6,2,1};
    // int n = sizeof(arr)/sizeof(int);
    // cout << "Array before sorting: " << endl;
    // printArray(arr, n);
    // sort(arr, arr+n);
    // cout << "Array after sorting in increasing order: " << endl;
    // printArray(arr, n);
    // int arr1[] = {4,3,5,6,2,1};
    // sort(arr1, arr1+n, compare);
    // cout << "Array after sorting in decreasing order using comparator: " << endl;
    // printArray(arr1, n);
    // int arr2[] = {4,3,5,6,2,1};
    // int n = sizeof(arr2)/sizeof(int);
    // bubbleSortUsingSelfCompartor(arr2, n, compare);
    // printArray(arr2, n);
    vector<int> v{4,3,5,6,2,1};
    //for (auto i : v) cout << i << " ";
    //sort(v.begin(), v.end());
    printUsingIterator(v.begin(), v.end());
    return 0;
}