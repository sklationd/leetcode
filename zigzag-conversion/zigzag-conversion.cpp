class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        
        vector<vector<char>> V(numRows);
        int sz = s.length();
        int index = 0;
        int vIndex = 0;
        bool direction = true;
        
        while(index < sz){
            V[vIndex].push_back(s[index]);
            index++;
            
            if(direction){
                if(vIndex < numRows - 1){
                    vIndex++;
                } else {
                    direction = false;
                    vIndex--;
                }
            } else {
                if(vIndex > 0){
                    vIndex--;
                } else {
                    direction = true;
                    vIndex++;
                }
            }
        }
        
        string res = "";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<V[i].size();j++){
                res += V[i][j];
            }
        }
        
        return res;
    }
};