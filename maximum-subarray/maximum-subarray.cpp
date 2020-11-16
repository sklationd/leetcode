class Solution {
public:
    long long max(long long a, long long b){
        return a > b ? a : b;
    }    

    int maxSubArray(vector<int>& nums) {
        long long M = nums[0];
        long long cM = 0;
        for(int i : nums){
            cM = max(cM + i, i);
            M = max(cM, M);
        }
        return M;
    }
};