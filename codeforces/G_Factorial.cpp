#include<iostream>
using namespace std;

long long int fact(int n) {
    long long int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
    return 0;
}