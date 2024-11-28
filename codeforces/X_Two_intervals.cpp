#include<iostream>
using namespace std;

int main () {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 >= l1) {
        if (l2 <= r1) {
            if (r2 < r1) {
                cout << l2 << " " << r2 << endl;
            } else {
                cout << l2 << " " << r1 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    } else {
        if (r2 >= r1) {
            cout << l1 << " " << r1 << endl;
        } else if (r2 < r1) {
            cout << -1 << endl;
        } else {
            cout << l1 << " " << r2 << endl;
        }
    }

    return 0;
}

// 2------5
// l1-----r1
//          6------12
//          l2-----r2

// case-1
// l1-----------r1 
//       l2---------r2
//       l2---r2        


// case-2
//         |l1--------r1
//       l2|-----r2
//       l2|---------------r2

