class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadanes algorithm 
        int mx = INT_MIN, sum = 0;
        for (int i = 0 ; i < nums.size() ; i++){
            sum+= nums[i];
            mx = max(mx,sum);
            if (sum < 0) sum = 0;
        }
        return mx;
    }
};