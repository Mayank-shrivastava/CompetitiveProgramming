#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    // check prime
    if (n == 2) {
        cout << "Prime" << endl;
        return 0;
    }

    for (int i = 3; i*i <= n; i++) {
        if (n % i == 0) {
            cout << "Not Prime" << endl;
            return 0;
        } 
    } 

    cout << "Prime" << endl;

    return 0;
}