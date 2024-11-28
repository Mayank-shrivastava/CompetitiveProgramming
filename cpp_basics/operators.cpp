#include<iostream>
using namespace std;

int main() 
{


    // unary operator (+, -) 
    // arithmetic operator (+,-,/,%)
    // Assignment operator (=)

    // logical operator
    // && (AND)
    // || (OR)
    // ! (NOT)

    // Question: 
    // Print "Hello" if a belongs to [0,10]
    // Print "World" if a belongs to (10, 20]
    // Print "Welcome to Coding blocks" otherwise

    int a;
    cin >> a;

    if (a >= 0 && a <= 10) 
    {
        cout << "Hello\n";
    } 
    else if (a > 10 && a <= 20) 
    {
        cout << "World\n";
    } 
    else 
    {
        cout << "Welcome to Coding blocks\n";
    }

    return 0;
}