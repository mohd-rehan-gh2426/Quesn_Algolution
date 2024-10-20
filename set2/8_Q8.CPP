#include <iostream>
#include <vector>
using namespace std;

int maxSumKConsecutive(vector<int>& arr, int N, int K) {
    if (K > N) return -1;  // Invalid case
    
    int max_sum = 0;
    for (int i = 0; i < K; i++) max_sum += arr[i];

    int window_sum = max_sum;
    for (int i = K; i < N; i++) {
        window_sum += arr[i] - arr[i - K];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}

int main() {
    vector<int> arr1 = {100, 200, 300, 400};
    int k1 = 2;
    cout << maxSumKConsecutive(arr1, arr1.size(), k1) << endl;  // Output: 700

    vector<int> arr2 = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    cout << maxSumKConsecutive(arr2, arr2.size(), k2) << endl;  // Output: 39

    vector<int> arr3 = {2, 3};
    int k3 = 3;
    cout << maxSumKConsecutive(arr3, arr3.size(), k3) << endl;  // Output: -1 (Invalid)
    
    return 0;
}