class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l,r,h;
        l = 0;
        r = nums.size();
        h = (l+r)/2;
        while(l<r){
            if(nums[h] >= target){
                r = h;
            } else {
                l = h+1;
            }
            h = (l+r)/2;
        }
        return h;
    }
};