#include<iostream>
using namespace std;

int main () {
    char ch;
    do {
        cin >> ch;
        switch(ch) {
            case '+':
                break;
            case '-':
                break;
            case '*':
                break;
            case '/':
                break;
            case '%':
                break;
            default:
                cout << "Invalid operation. Try again." << endl;
        }
    } while(ch != 'X' || ch != 'x');


    return 0;
}