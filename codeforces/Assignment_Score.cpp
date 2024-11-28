#include<iostream>
#include<vector>
#include<algorithm>
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

        int achieved_marks = 0;
        for (int val : v) {
            achieved_marks+=val;
        } 
        int ans = (0.5*((n+1)*100)) - achieved_marks;
        //cout << ans << endl;
        if (ans < 0) {
            cout << 0 << endl;
        } else if (ans > 100) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}