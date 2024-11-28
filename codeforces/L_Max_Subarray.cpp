#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i=0; i<n; i++) {
            int maxi = INT_MIN;
            for(int j=i; j<n; j++) {
                maxi = max(maxi, v[j]);
                cout << maxi << " ";
            }
        }
        cout << endl;
    }
}