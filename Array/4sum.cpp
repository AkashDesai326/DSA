class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            if(i==0 || (i>0 && nums[i] != nums[i-1])) {
                for(int j=i+1; j<n; j++) {
                    if(j == i+1 || (j>i+1 && nums[j] != nums[j-1])) {
                        int l=j+1, r=n-1;
                        long long val = (long long)target - (long long)nums[i] - (long long)nums[j];
                        while(l<r) {
                            if(nums[l] + nums[r] == val) {
                                vector<int> tmp;
                                tmp.push_back(nums[i]);
                                tmp.push_back(nums[j]);
                                tmp.push_back(nums[l]);
                                tmp.push_back(nums[r]);
                                ans.push_back(tmp);
                                while(l<r && nums[l] == nums[l+1]) l++;
                                while(l<r && nums[r] == nums[r-1]) r--;
                                l++; r--;
                            } else if( nums[l] + nums[r] < val) {
                                l++;
                            } else {
                                r--;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};