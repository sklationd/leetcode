#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> M;
        vector<int> result(2);
        for(int i=0;i<nums.size();i++){
            M[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            auto it = M.find(target-nums[i]);
            if(it != M.end() && it->second != i) {
                result[0] = i;
                result[1] = it->second;
                break;
            }
        }
        return result;
    }
};