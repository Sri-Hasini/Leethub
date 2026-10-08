class Solution {
public:
    void fun(int n, int k, int i) {
        if (v.size() == k) {
            ans.push_back(v);
            return;
        }
        if (i > n) return;
        v.push_back(i);
        fun(n, k, i + 1);
        v.pop_back();
        fun(n, k, i + 1);
    }
    vector <int> v;
    vector <vector <int>> ans;
    vector<vector<int>> combine(int n, int k) {
        fun(n, k, 1);
        return ans;
    }
};