class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         if(nums.size() == 1) {
            return nums[0];
        }
        int sum=0, max=INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            sum = sum + nums[i];
            if(sum < nums[i])
                sum = nums[i];
            if(sum > max)
                max = sum;
        }
        return max;
    }
};