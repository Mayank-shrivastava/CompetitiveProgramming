#include<iostream>
using namespace std;


/*
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5 
 * 
 */

int main () {
    int n;
    cin >> n;
    int val = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << val << "    ";
            val++;
        }
        cout << endl;
    }

    return 0;
}