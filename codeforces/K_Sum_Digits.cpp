#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int size; 
    cin >> size;
    string s;
    cin >> s;
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (s[i]-'0');
    }
    cout << sum << endl;
    return 0;
}