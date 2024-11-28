#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;



int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>freq(10e6); //freq arr max size
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        freq[val]++;
    }

    // print the sorted array
    for (int i = 0; i <= 10e6; i++) {
        while(freq[i] > 0) {
            cout << i << " ";
            freq[i]--;
        }
    }
}