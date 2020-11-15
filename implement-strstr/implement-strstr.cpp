class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1 = haystack.size(); int s2 = needle.size();
        int cmp = s1 - s2 + 1;
        if(!s2)
            return 0;
        if(!cmp)
            return -1;
        
        for(int i=0;i<cmp;i++){
            for(int j=0;j<s2;j++){
                if(haystack[i+j]!=needle[j]) {
                    j=0;
                    break;
                }
                if(j==needle.size()-1) return i;
            }
        }
        return -1;
    }
};