#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> alphabets(26);
    if (n % 2 == 0) {
        for (int i = 0; i < n-1; i+=2) {
            if (s[i] != s[i+1]) {
                cout << "No" << endl;
                return 0;
            }
        }
        for (char ch : s) {
            alphabets[ch-'a']++;
        } 
        // for (int val : alphabets) cout << val << " ";
        // cout << endl;
        for(int i = 0; i < 26; ++i) {
            if (alphabets[i]!=0 && alphabets[i]!=2) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}