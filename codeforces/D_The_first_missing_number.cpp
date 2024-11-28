#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int val;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> val;
        mp[val]++;
    }

    for (int i = -m; i <= m; i++) {
        if (mp.find(i) == mp.end()) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}