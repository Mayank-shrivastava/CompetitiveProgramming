#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool b_search(vector<long long> &v, int n, int key) {
    int s = 0, e = n-1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if (v[mid] == key) {
            return true;
        } else if (v[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return false;
}


int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    while(q--) {
        int key; cin >> key;
        bool is_present = b_search(v, n, key);
        if (is_present) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
}