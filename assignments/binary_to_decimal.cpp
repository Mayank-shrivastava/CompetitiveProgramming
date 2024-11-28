#include<iostream>
#include<cmath>
using namespace std;

int main () {
    long long bin_num;
    cin >> bin_num;
    int decimal_num = 0;
    int power = 0;
    while(bin_num > 0) {
        int digit = bin_num % 10;
        decimal_num += digit * pow(2, power);
        bin_num/=10;
        power++;
    }
    cout << decimal_num << endl;
    return 0;
}

// 32 16 8 4 2 1 
// 543210
// 101010
//      0*2^0