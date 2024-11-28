#include<iostream>
using namespace std;

void solve(int num, int digit) {
    int cnt = 0;
    while(num > 0) {
        int rem = num % 10;
        if (rem == digit) {
            cnt++;
        }
        num/=10;
    }
    cout << cnt << endl;
}

int main () {
    int num, digit;
    cin >> num >> digit;
    solve(num, digit);
    return 0;
}