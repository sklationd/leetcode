class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int M = -1;
        for(int i=0;i<candies.size();i++){
            if(candies[i] > M)
                M = candies[i];
        }
        
        vector<bool> V;
        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= M)
                V.push_back(true);
            else 
                V.push_back(false);
        }
        return V;
    }
};