class Solution {
public:
    vector<string>v;
    void f(string s,int n,int open,int close){
        if((open+close)==(2*n)){
           v.push_back(s);
           return ;
        }
        if(open<n){
            f(s+'(',n,open+1,close);
        }
        if(close<open){
            f(s+')',n,open,close+1);
        }
        return ;
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        int o=0,c=0;
        f(s,n,o,c);
        return v;
    }
};
