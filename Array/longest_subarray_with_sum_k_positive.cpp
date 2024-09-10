int longestSubarrayWithSumK(vector<int> nums, long long k) {
    // Write your code here
    int i=0, j=0, n=nums.size(), maxLen=0;
    long long sum=nums[0];
        while(j<n && i<n) {

            while(sum > k && i<=j) {
                sum -= nums[i++];
            }

            if(sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
            if(j<n) 
                sum += nums[++j];
        }
        return maxLen;
}