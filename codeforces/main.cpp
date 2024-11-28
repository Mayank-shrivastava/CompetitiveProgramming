#include<iostream>
#include<string>
using namespace std;

int main () {
    string s1 = "eyJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJodHRwczovL2FwaS5teXZhbHVlZmlyc3QuY29tL3BzbXMiLCJzdWIiOiJsaXZndWFyZHdhIiwiZXhwIjozMjU4OTY3MzMwfQ.QuVlcb2zji_itJN0RGdu7dhTwOeL6DXuawdhr6Axx3k";
    string s2 = "eyJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJodHRwczovL2FwaS5teXZhbHVlZmlyc3QuY29tL3BzbXMiLCJzdWIiOiJsaXZndWFyZHdhIiwiZXhwIjozMjU4OTY3MzMwfQ.QuVlcb2zji_itJN0RGdu7dhTwOeL6DXuawdhr6Axx3k";
    if (s1.compare(s2) == 0) {
        cout << "s1 equals to s2" << endl;
    } else {
        cout << "s1 is not equals to s2" << endl;
    }
    return 0;
}