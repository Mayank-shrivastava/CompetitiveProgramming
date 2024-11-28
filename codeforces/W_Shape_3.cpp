#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int stars = 1;
    for (int i = 1; i<=n; i++) {
        // print spaces
        int spaces = n-i;
        while(spaces--) {
            cout << " ";
        }
        // print stars
        int stars_new = stars;
        while(stars_new--) {
            cout << "*";
        }
        stars+=2;
        cout << endl;
    }
    stars-=2;
    for (int i = 1; i<=n; i++) {
        //print spaces
        int spaces = i-1;
        while(spaces--) {
            cout << " ";
        }
        //print stars
        int stars_new = stars;
        while(stars_new--) {
            cout << "*";
        }
        stars-=2;
        cout << endl;
    }
}