#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    const int NO_CLUSTERS = 5;
    vector<vector<pair<int,int>>> permutations;
    vector<pair<int,int>> pair_list;
    for (int i = 0; i <= NO_CLUSTERS; ++i) {
        for (int j = i+1; j <= 5; j++) {
            pair_list.push_back({i,j});
        }
    }

    for (int i = 0; i < pair_list.size(); i++) {
        
    }

    for (auto p : pair_list) {
        cout << p.first << " " << p.second << endl;
    }

}


//  [((0, 1), (2, 3), (4, 5)),
//  ((0, 1), (2, 4), (3, 5)),
//  ((0, 1), (2, 5), (3, 4)),
//  ((0, 2), (1, 3), (4, 5)),
//  ((0, 2), (1, 4), (3, 5)),
//  ((0, 2), (1, 5), (3, 4)),
//  ((0, 3), (1, 2), (4, 5)),
//  ((0, 3), (1, 4), (2, 5)),
//  ((0, 3), (1, 5), (2, 4)),
//  ((0, 4), (1, 2), (3, 5)),
//  ((0, 4), (1, 3), (2, 5)),
//  ((0, 4), (1, 5), (2, 3)),
//  ((0, 5), (1, 2), (3, 4)),
//  ((0, 5), (1, 3), (2, 4)),
//  ((0, 5), (1, 4), (2, 3))]