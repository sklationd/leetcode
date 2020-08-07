#include <algorithm>

class Solution {
public:
    // check is tuple can be inserted to vector
    // can be replaced with hash 
    bool check(vector<vector<int>> &V, int a, int b, int c){
        for(int i=0;i<V.size();i++){
            if(V[i][0] == a && V[i][1] == b && V[i][2] == c)
                return false;
        }
        return true;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int s = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        
        for(int i=0;i<s-2;i++){
            for(int j=i+1;j<s-1;j++){
                if(binary_search(nums.begin()+j+1,nums.end(),-nums[i]-nums[j])){
                    if(check(result, nums[i], nums[j], -nums[i]-nums[j])){
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(-nums[i]-nums[j]);
                        result.push_back(v);  
                    } 
                }
            }
        }
        return result;
    }
};