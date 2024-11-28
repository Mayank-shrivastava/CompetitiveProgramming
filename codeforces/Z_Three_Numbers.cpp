#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    
    int cnt = 0;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int rem = s-(x+y);
            if (rem >= 0 && rem <= k) 
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}