#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] == ans) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2) {
            return ans;
        }
    }

    return ans; // Safe because majority element is guaranteed to exist
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = majorityElement(nums);
    cout << "Majority Element is: " << result << endl;
    return 0;
}
