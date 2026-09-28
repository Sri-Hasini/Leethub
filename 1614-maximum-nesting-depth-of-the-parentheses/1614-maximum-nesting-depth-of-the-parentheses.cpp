class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        stack <char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            }
            else if (s[i] == ')') {
                int size = st.size();
                maxi = max(maxi, size);
                st.pop();
            }
        }
        return maxi;
    }
};