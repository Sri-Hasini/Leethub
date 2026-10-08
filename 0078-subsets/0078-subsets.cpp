class Solution {
public:
    void subsequence(vector <int> v,vector <int> ans, vector<vector<int>> &ds, int n) {
        if(n < 0) {
            ds.push_back(ans);
            return;
        }
        ans.push_back(v[n]);
        subsequence(v,ans,ds,n-1);
        ans.pop_back();
        subsequence(v,ans,ds,n-1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size()-1;
        vector<vector<int>> ds ;
        vector <int> ans;
        subsequence(nums,ans,ds,n);
        set<vector <int>> dss(ds.begin(), ds.end());
        vector <vector <int>> d(dss.begin(), dss.end());
        return d;
    }
};