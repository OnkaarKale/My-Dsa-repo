//Kadane's Algorithm
#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int cs = nums[0];
    int ms = nums[0];
    int i, z;
    for (i=1;i<nums.size();i++){
        cs= max(nums[i],cs+nums[i]);
        ms= max(ms,cs);
    }
    return ms;

   }
    
};
using namespace std;
int main(){
    
    vector <int> nums={-2,1,-3,4,-1,2,1,-5,4};
    Solution A1;
    int ans= A1.maxSubArray(nums);
    cout<<ans;
    return 0;
}
