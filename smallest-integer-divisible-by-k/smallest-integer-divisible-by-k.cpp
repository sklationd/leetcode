#include <unordered_set>

class Solution {
public:
    int smallestRepunitDivByK(int K) {
        vector<int> V;
        unordered_set<int> S;
        V.push_back(1 % K);
        S.insert(1 % K);
        if(V[0] == 0)
            return 1;
        while(1){
            int result = (V[V.size()-1]*10 + 1) % K;
            if(S.find(result) != S.end())
                return -1;
            
            S.insert(result);
            V.push_back(result);
            
            if(result==0)
                return V.size();
        }
    }
};