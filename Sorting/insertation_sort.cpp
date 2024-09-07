class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++) {
            int key = nums[i], j = i-1;
            while(nums[j] > key) {
                nums[j+1] = nums[j];
                j = j-1;
            }
            nums[j+1] = key;
        }
        return nums;
    }
};