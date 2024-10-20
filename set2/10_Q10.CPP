

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maxLengthSubarrayWithSum(vector<int>& nums, int target) {
    unordered_map<int, int> prefixSumMap;
    int sum = 0, maxLength = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // Check if sum is equal to target
        if (sum == target) {
            maxLength = i + 1;
        }

        // Check if there is a subarray with sum equal to (sum - target)
        if (prefixSumMap.find(sum - target) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[sum - target]);
        }

        // Store the prefix sum with index only if it's not already stored
        if (prefixSumMap.find(sum) == prefixSumMap.end()) {
            prefixSumMap[sum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> nums = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;
    int result = maxLengthSubarrayWithSum(nums, target);
    
    if (result > 0) {
        cout << "The length of the longest subarray with sum " << target << " is: " << result << endl;
    } else {
        cout << "No subarray with the given sum found." << endl;
    }

    return 0;
}