class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        string s = "";
        for(int i=0;i<strs[0].length();i++){
            bool result = true;
            for(int j=1;j<strs.size();j++){
                if(i<strs[j].size() && strs[j][i] == strs[0][i]){
                    result = true;
                } else {
                    result = false;
                    break;
                }
            }
            if(result){
                s += strs[0][i];            
            } else {
                break;
            }
        }
        return s;
    }
};