#include<iostream>
#include<cmath>
using namespace std;

long long int binary_to_decimal(long long int bin_num) {
    long long int decimal_num = 0;
    int power = 0;
    while(bin_num > 0) {
        int digit = bin_num % 10;
        decimal_num += digit * pow(2, power);
        bin_num/=10;
        power++;
    }
    return decimal_num;
}

int main () {
    int n;
    long long int bin_num;
    cin >> n;
    while(n--) {
        cin >> bin_num;
        cout << binary_to_decimal(bin_num) << endl;        
    }
    return 0;
}