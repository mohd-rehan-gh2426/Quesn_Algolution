
#include <iostream>
#include <vector>
using namespace std;

bool hasPairNaive(vector<int>& arr, int N, int X) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == X) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> A = {1, 2, 4, 5, 7, 11};
    int N = 6, X = 9;
    cout << (hasPairNaive(A, N, X) ? "Yes" : "No") << endl;  // Output: Yes
    return 0;
} 