class Solution {
public:
    int sumCounts(vector<int>& nums) {
        vector <int> ans;
        int cnt=0,g=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                map<int,int>m;
                vector<int>x;
                for(int k=i;k<=j;k++){
                    x.push_back(nums[k]);
                }
                for(auto i:x){
                    m[i]=1;
                }
                g=m.size();
                // cout<<g<<endl;
                cnt+=(g*g);
            }   
        }
        return cnt;
    }
};