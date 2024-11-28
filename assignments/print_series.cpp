#include<iostream>
using namespace std;

int main () {
    int n1, n2;
    cin >> n1 >> n2;
    int n = 1;
    while(n1 > 0) {
        int num = 3*n+2;
        if (num % n2 != 0) {
            cout << num << endl;
            n1--;
        } 
        n++;
    }
    return 0;
}