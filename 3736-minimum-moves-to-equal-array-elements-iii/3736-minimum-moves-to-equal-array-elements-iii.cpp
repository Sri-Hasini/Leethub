class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mVal = *max_element(nums.begin(), nums.end());
        int moves = 0;
        for (auto x : nums) {
            moves += (mVal - x);
        }
        return moves;
    }
};