class Solution {
public:
    int partition(vector<vector<int>>& intervals, int start, int end) {
        int pi = start;
        vector<int> pivot = intervals[end];
        if(start == end) {
            return start;
        }
        for(int i= start; i<=end-1; i++) {
            if(intervals[i][0] <= pivot[0]) {
                swap(intervals[i], intervals[pi]);
                pi++;
            }
        }
        swap(intervals[pi], intervals[end]);
        return pi;
    }
    void sortIntervals(vector<vector<int>>& intervals, int start, int end) {
        if(start < end) {
            int pivotIndex = partition(intervals, start, end);
            sortIntervals(intervals, start, pivotIndex - 1);
            sortIntervals(intervals, pivotIndex + 1, end);
        }
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sortIntervals(intervals, 0, intervals.size()-1);
        vector<int> temp = intervals[0];
        for(int i=0; i<intervals.size(); i++) {
            if(temp[1] >= intervals[i][0]) {
                if(temp[1] <= intervals[i][1]) {
                    temp[1] = intervals[i][1];
                }
            }
            else {
                res.push_back(temp);
                temp = intervals[i];
            }
        }
        res.push_back(temp);
        return res;
    }
};