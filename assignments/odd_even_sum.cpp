#include<iostream>
using namespace std;

int main () {
    long long a;
    cin >> a;
    int place = 1;
    int odd_sum = 0, even_sum = 0;
    while(a != 0) {
        int digit = a % 10;
        if (place % 2 == 0) {
            even_sum += digit;
        } else {
            odd_sum += digit;
        }
        place++;
        a/=10;
    }
    cout << odd_sum << endl;
    cout << even_sum << endl;
    return 0;
}