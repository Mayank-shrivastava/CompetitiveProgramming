#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int a,b,c;
    cin >> a >> b >> c;
    // for a quadratic equation
    // first find discriminant
    //d = b^2-4ac
    // d > 0 -> real roots
    // d == 0 -> equal roots
    // d < 0 -> imaginary roots
    int d = pow(b,2) - (4*a*c);
    if (d >= 0) {
        int r1 = (-b + sqrt(d))/(2*a);
        int r2 = (-b - sqrt(d))/(2*a);
        cout << "Real and Distinct" << endl;
        if (r1 > r2) {
            cout << r2 << " " << r1 << endl;
        } else {
            cout << r1 << " " << r2 << endl;
        }
    }
    return 0;
}