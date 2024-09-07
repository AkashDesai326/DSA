class Solution {
public:
    int removeDuplicates(int arr[],int n) {
        int i=0;
        for(int j=1; j<n; j++) {
            if(arr[j] != arr[i]) {
                arr[++i] = arr[j];
            }
        }
        return ++i;
    }
}