vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest=INT_MIN, secondLargest=INT_MIN;
    for(int i=1; i<n; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }
    return {largest, secondLargest};
}
