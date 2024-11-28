#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    int num = 1;
    int inv_num = 0;
    while(n != 0) {
        int pos = n % 10;
        inv_num += num * (pow(10, pos-1));
        num+=1;
        n/=10;
    }
    cout << inv_num << endl;

    return 0;
}