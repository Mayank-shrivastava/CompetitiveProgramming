#include <iostream>
#include <vector>
#include <set>
#include <utility>

using namespace std;

// Function to generate all pair combinations recursively
void generatePairings(vector<int>& remaining, vector<pair<int, int>>& currentPairs, vector<vector<pair<int, int>>>& allPairings) {
    // Base case: if no elements are left, add currentPairs to the result
    if (remaining.empty()) {
        allPairings.push_back(currentPairs);
        return;
    }

    // Take the first element in the remaining list
    int first = remaining[0];
    remaining.erase(remaining.begin());

    // Pair it with every other element in the remaining list
    for (size_t i = 0; i < remaining.size(); ++i) {
        int second = remaining[i];

        // Create the pair
        pair<int, int> newPair = {first, second};

        // Remove second from remaining
        vector<int> newRemaining = remaining;
        newRemaining.erase(newRemaining.begin() + i);

        // Add the new pair to the current list of pairs
        currentPairs.push_back(newPair);

        // Recurse
        generatePairings(newRemaining, currentPairs, allPairings);

        // Backtrack
        currentPairs.pop_back();
    }

    // Restore the first element to remaining
    remaining.insert(remaining.begin(), first);
}

int main() {
    // Input: integers from 0 to 5
    vector<int> numbers = {0, 1, 2, 3, 4, 5};

    // Variables to store results
    vector<vector<pair<int, int>>> allPairings;
    vector<pair<int, int>> currentPairs;

    // Generate all pairings
    generatePairings(numbers, currentPairs, allPairings);

    // Print the result
    for (const auto& pairing : allPairings) {
        cout << "[";
        for (const auto& p : pairing) {
            cout << "(" << p.first << ", " << p.second << ")";
        }
        cout << "]\n";
    }

    return 0;
}
