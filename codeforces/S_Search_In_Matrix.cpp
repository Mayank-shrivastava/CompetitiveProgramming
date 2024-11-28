#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == k) {
                cout << "will not take number" << endl;
                return 0;
            }
        }
    }
    cout << "will take number" << endl;
    return 0;
}