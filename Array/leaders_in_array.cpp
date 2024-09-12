vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    ans.push_back(a[a.size()-1]);
    if(a.size() < 2)
        return ans;
    for(int i=a.size()-2; i>=0; i--) {
        if(a[i] > ans.back()) {
            ans.push_back(a[i]);
        }
    }
    return ans;
}