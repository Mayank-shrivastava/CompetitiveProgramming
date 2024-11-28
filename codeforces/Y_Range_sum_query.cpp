#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n+1);
    for (ll i = 1; i <= n; i++) cin >> v[i];
    vector<ll> prefix(n+1);
    prefix[0] = 0; //prefix[0]=0; // index out of bound na aaye 
    prefix[1] = v[1];
    for (int i = 2; i <= n; i++) {
        prefix[i] = prefix[i-1] + v[i];
    }
    // prefix[2] = prefix[1] + v[2];
    //              6 + 
    // for (const int i : prefix) {
    //     cout << i << endl;
    // }

    while(q--) {
        ll l, r;
        cin >> l >> r;
        ll sum = prefix[r]-prefix[l-1];
        cout << sum << endl;
    }
    return 0;
}

// time complexity analysis
// 