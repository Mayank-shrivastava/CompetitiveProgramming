#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int prev;
    cin >> prev;

    bool isValid = true;
    bool isDecreasing = true;
    // why --n since one i/p is already done
    
    while(--n) {
        int curr; 
        cin >> curr;
        if (curr == prev) {
            isValid = false;
            break;
        } else if (curr > prev) {
            isDecreasing = false;
        } else if (!isDecreasing && curr < prev) {
            isValid = false;
            break;
        }
        prev = curr;
    }

    if (isValid) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}