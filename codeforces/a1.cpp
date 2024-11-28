#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find a valid permutation or detect impossibility
vector<int> findValidPermutation(int N, int K) {
    vector<int> P(N);
    vector<int> mod_count(K, 0);

    // Step 1: Count occurrences of each mod value
    for (int i = 0; i < N; ++i) {
        mod_count[i % K]++;
    }

    // Step 2: Check if a valid permutation is possible
    for (int count : mod_count) {
        if (count > N - count) {
            // If too many positions require the same mod value, it's impossible
            return {};
        }
    }

    // Step 3: Create an initial permutation
    for (int i = 0; i < N; ++i) {
        P[i] = i + 1;
    }

    // Step 4: Construct a valid permutation
    for (int i = 0; i < N; ++i) {
        if (P[i] % K == i % K) {
            // Find a valid swap
            for (int j = i + 1; j < N; ++j) {
                if (P[j] % K != i % K && P[i] % K != j % K) {
                    swap(P[i], P[j]);
                    break;
                }
            }
        }
    }

    return P; // Return the permutation
}

int main() {
    int N, K;
    cout << "Enter N (size of array) and K (mod value): ";
    cin >> N >> K;

    vector<int> result = findValidPermutation(N, K);

    if (result.empty()) {
        cout << "Impossible" << endl;
    } else {
        cout << "Valid Permutation: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
