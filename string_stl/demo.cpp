#include<iostream>
#include<string>
using namespace std;

int main () {
    //string s;
    //cin >> s; // cin skips white spaces while taking inputs
    //cout << s << endl;
    // to take full line input with white spaces
    //getline(cin, s); // this function also takes delimeter in it
    //cout << s << endl;
    //string s2;
    //getline(cin, s2, '$');
    //cout << s2 <<endl;
    // to compare string lexicographical
    string s1 = "Hello";
    string s2 = "World";
    cin >> s1 >> s2;
    if (s1 > s2) {
        cout << "s2 is smaller than s1" << endl;
    } else {
        cout << "s1 is smaller than s2" << endl;
    }
    //inbuilt function
    cout << s1.compare(s2) << endl;//return 0,+ve,-ve
    // 0 if s1 == s2
    // +ve if s1 > s2
    // -ve if s1 < s2
    cout << s1.size() << endl;
    return 0;
}

// oops
// generics
// vector and stl

// write codes whatever studied till now and solve assignment problems
