#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<int> b(n-1);
        for (int i = 0; i < n-1; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<int> a(n);
        a[0]=1; a[1]=b[0]-a[0];
        for (int i = 1; i<=n-1; i++) {
            a[i+1] = b[i]-a[i];
        }
        for (int i : a) {
            cout << i << " ";
        }
        cout << endl;
    }

}