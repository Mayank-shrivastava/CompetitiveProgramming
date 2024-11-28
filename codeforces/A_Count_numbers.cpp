#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> freq(100001);
    int n,q;
    cin >> n >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        if (x == 1) {
            // add in the freq arr
            freq[y]++;
        } else {
            // print occurenc from freq arr
            cout << freq[y] << endl;
        }
    }
}