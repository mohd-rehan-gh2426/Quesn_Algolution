
#include <iostream>
#include <vector>
using namespace std;

int equilibriumIndex(vector<int>& arr) {
    int total_sum = 0, left_sum = 0;
    for (int num : arr) total_sum += num;

    for (int i = 0; i < arr.size(); i++) {
        total_sum -= arr[i];  // total_sum now becomes right_sum
        if (left_sum == total_sum) return i + 1;  // return in 1-based index
        left_sum += arr[i];
    }
    return -1;
}

int main() {
    vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};
    cout << equilibriumIndex(arr) << endl;  // Output: 4

    vector<int> arr2 = {1, 2, 3};
    cout << equilibriumIndex(arr2) << endl;  // Output: -1

    return 0;
} 