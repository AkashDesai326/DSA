class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        int s1 = mid - low + 1, s2 = high - mid;
        vector<int> L(s1), R(s2);
        int i = 0, j = 0;
        for (int l = low; l <= mid; l++)
            L[i++] = arr[l];
        for (int r = mid + 1; r <= high; r++)
            R[j++] = arr[r];

        i = 0;
        j = 0;
        int k = low;

        while(i < s1 && j < s2) {
            if(L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
               arr[k] = R[j];
                j++; 
            }
            k++;
        }
        while(i < s1) {
            arr[k++] = L[i++];
        }
        while(j < s2) {
            arr[k++] = R[j++];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if(low<high) {
            int mid = low + (high - low) / 2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid+1, high);
            merge(nums, low, mid, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};