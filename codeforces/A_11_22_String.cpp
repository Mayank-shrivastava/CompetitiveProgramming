#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;

    int one_pos = (n+1)/2-1;
    int dash_pos = (n+1)/2;
    int two_pos = ((n+1)/2)+1;

    // cout << one_pos << endl;
    // cout << dash_pos << endl;
    // cout << two_pos << endl;
    bool ocp = true;
    bool tcp = true;
    for (int i = 0; i < one_pos; ++i) {
        if (s[i] != '1') {
            ocp = false;
        }
    }
    // cout << ocp << endl;
    for (int i = two_pos-1; i < n; i++) {
        if (s[i] != '2') {
            tcp = false;
        }
    }
    // cout << tcp << endl;

    if (n % 2 != 0 && ocp & tcp && s[dash_pos-1] == '/') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}