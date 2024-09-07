class Solution {
public:
    int largestElement(int[] arr, int n) {
        int largest = 0;
        for(int i=0; i<n; i++) {
            if(arr[i]>largest) {
                largest = arr[i];
            }
        }
        return largest;
    }
}