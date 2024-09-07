class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=n-1; i>=1; i--) {
            for(int j=0; j<=i; j++) {
                if(nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                }
            }
        }
        return nums;
    }
};