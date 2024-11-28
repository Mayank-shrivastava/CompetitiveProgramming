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
    int key;
    cin >> key;
    auto it = find(v.begin(), v.end(), key);
    if (it != v.end()) {
        cout << it-v.begin() << endl;
    } else {
        cout << -1 << endl;
    }
}