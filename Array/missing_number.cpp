class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = size * (size + 1)/2, sumArr=0;
        for(int i=0; i<size; i++)
            sumArr += nums[i];
        return sum - sumArr;    
    }
};