class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int cnt = 0, sum = 0;
        map<int, int> mp;
        mp[0] = 1;
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
            int rem = sum - k;
            if(mp[rem])
                cnt += mp[rem];
            mp[sum]++;    
        }
        return cnt;
    }
};