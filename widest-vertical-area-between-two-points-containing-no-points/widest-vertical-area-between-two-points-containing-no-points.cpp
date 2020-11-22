class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> V;
        for(int i=0;i<points.size();i++){
            V.push_back(points[i][0]);
        }
        
        sort(V.begin(), V.end());
        int M = 0;
        for(int i=1;i<V.size();i++){
            int cdd = V[i] - V[i-1];
            if(cdd > M)
                M = cdd;
        }
        return M;
    }
};