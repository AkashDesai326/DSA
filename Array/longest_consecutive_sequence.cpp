class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0, maxCount = 0;
         if(nums.size()==0)
            return 0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i+1] == nums[i])
                continue;
            if(nums[i] + 1 == nums[i+1]) {
                count++;
            } else {
                count++;
                if(count>maxCount)
                    maxCount = count;
                count = 0;
            }
        }
        count++;
        if(count>maxCount)
            return count;
        return maxCount;
    }
};