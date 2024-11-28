#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--) {
        int k,n;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) v[i]=i+1;

        if (k > n) cout << -1 << endl;
        if (k == 1 && n == 1) cout << -1 << endl;
        else  {
            vector<int> pre;
            int mid = n/2;
            // cout << mid << endl;
            for (int i=mid; i < n; i++) {
                pre.push_back(v[i]);
            } 
            for(int i = 0; i <= mid-1; i++) {
                pre.push_back(v[i]);
            }

            for (auto i : pre) {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;

}