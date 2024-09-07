class Solution {
public:

    void reverse(vector<int>& nums, int start, int end) {
        int i=start, j=end;
        while(i<=j) {
            int temp = nums[i];
            nums[i++] = nums[j];
            nums[j--] = temp;
        }
    }

    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size()-k, nums.size() - 1);
        reverse(nums, 0, nums.size() - 1);
    }
};