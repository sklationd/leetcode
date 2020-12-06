class Solution {
public:
    int find_closest(vector<int>& nums, int l, int r, int target){
        while(l+1<r){
            int m = (l+r)/2;
            if(nums[m] > target){
                r = m;
            } else if(nums[m] < target){
                l = m;
            } else {
                return m;
            }
        }
        if(abs(nums[l]-target) > abs(nums[r] - target)){
            return r;
        } else {
            return l;
        }
        
    }
    
    
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int m = 100000;
        int res;
        for(int i=0;i+2<nums.size();i++){
            for(int j=i+1;j+1<nums.size();j++){
                int new_target = target - nums[i] - nums[j];
                
                // find closest elem to new_target
                int k = find_closest(nums, j+1, nums.size()-1, new_target);
                int r = abs(target - (nums[i] + nums[j] + nums[k]));
                if(m > r){
                    m = r;
                    res = nums[i] + nums[j] + nums[k];
                }
            }
        }
        return res;
    }
};