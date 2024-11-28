#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    int i = 0, j = 0;
    while(i < n && j < m) {
        if (a[i] == b[j]) {
            i++;
            j++;
        } else if (a[i] != b[j]) {
            i++;
        }
    }

    


    return 0;
}