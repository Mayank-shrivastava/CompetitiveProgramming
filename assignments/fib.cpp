#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a = 0, b = 1;
    n = n-1;
    int c = 0;
    while(n--) {
        c = a + b;
        //cout << c << endl;
        a = b;
        b = c;
    }
    cout << c << endl;

    return 0;
}

// 0, 1, 1, 2, 3,5,8,13,21,
// a  b  c