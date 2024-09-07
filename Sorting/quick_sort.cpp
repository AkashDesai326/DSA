class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        int pi = low, pivot = nums[high];
        for(int i=low; i<high; i++) {
            if(nums[i]<=pivot) {
                int temp = nums[i];
                nums[i] = nums[pi];
                nums[pi] = temp;
                pi++;
            }
        }
        int tmp = nums[high];
        nums[high] = nums[pi];
        nums[pi] = tmp;
        return pi;
    }

    void quickSort(vector<int>& nums, int low, int high) {
        if(low < high) {
            int pi = partition(nums, low, high);
            quickSort(nums, low, pi - 1);
            quickSort(nums, pi + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};