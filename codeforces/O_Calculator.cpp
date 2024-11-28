#include<iostream>
using namespace std;

int main () {
    int a;
    char s;
    int b;
    cin >> a >> s >> b;
    switch(s) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
    }
    return 0;
}