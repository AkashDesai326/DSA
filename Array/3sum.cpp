class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++) {
            if(i==0 || (i>0 && nums[i] != nums[i-1])) {
                int l = i+1, r=nums.size()-1;
                while(l<r) {
                    if(nums[l] + nums[r] == -nums[i]) {
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[l]);
                        tmp.push_back(nums[r]);
                        ans.push_back(tmp);
                        while(l<r && nums[l] == nums[l+1]) l++;
                        while(l<r && nums[r] == nums[r-1]) r--;
                        l++;
                        r--;
                    } else if(nums[l] + nums[r] < -nums[i]) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};