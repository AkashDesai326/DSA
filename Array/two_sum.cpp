class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> vc;
        for(int i=0; i<nums.size(); i++) {
            if(mp.find(nums[i]) != mp.end()) {
                vc.push_back(mp[nums[i]]);
                vc.push_back(i);
                return vc;
            }
            else {
               mp[target - nums[i]] = i;
            }
        }
        return vc;
    }
};