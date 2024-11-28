#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int s=0, e=n-1;
    while(s <= e) {
        if (v[s] != v[e]) {
            cout << "NO" << endl;
            return 0;
        }
        s++;
        e--;
    }

    cout << "YES" << endl;
    return 0;
}