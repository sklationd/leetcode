class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> S;
        for(int i=0;i<nums.size();i++){
            unordered_set<int>::const_iterator it=S.find(nums[i]);
            if(it != S.end()){
                nums.erase(nums.begin()+i);
                i--;                
            }
            else
                S.insert(nums[i]);
        }
        return S.size();
    }
};