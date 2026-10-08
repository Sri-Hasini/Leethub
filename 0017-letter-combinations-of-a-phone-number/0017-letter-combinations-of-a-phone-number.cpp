class Solution {
private:
    void solve(string digits, string output, int i, vector <string> &ans, map <int, string> m) {
        if (i >= digits.length()) {
            ans.push_back(output);
            return;
        }
        int num = digits[i] - '0';
        string value = m[num];
        for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);
            solve(digits, output, i + 1, ans, m);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        map <int, string> m;
        m[1] = "";
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        m[0] = "";
        vector <string> ans;
        if (digits.length() == 0) return ans;
        int i = 0;
        string output;
        solve(digits, output, i, ans, m);
        return ans;
    }
};