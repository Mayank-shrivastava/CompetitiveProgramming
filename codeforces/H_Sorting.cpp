#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubble_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}

void selection_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[min_idx]) {
                min_idx=j;
            }
        }
        //swap v[i] and v[min_idx]
        swap(v[i], v[min_idx]);
    }

}
int main () {
    // fast io 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    //bubble_sort(v);
    selection_sort(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}