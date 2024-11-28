#include<iostream>
#include<cmath>
using namespace std;

int reverse_num(int num) {
    int reverse = 0;
    while(num > 0) {
        reverse = reverse * 10 + (num%10);
        num/=10;
    }
    return reverse;
}

int main () {
    long long decimal_num;
    cin >> decimal_num;
    int octal_num = 0;
    while(decimal_num > 0) {
        int digit = decimal_num % 8;
        octal_num = octal_num * 10 + digit;
        decimal_num/=8;
    }
    cout << reverse_num(octal_num) << endl;
    return 0;
}

