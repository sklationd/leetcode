class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> M;
        for(int i=0;i<s.length();i++){
            // first time
            if(M.find(s[i]) == M.end()){
                M[s[i]] = 1;
            } else {
                M[s[i]]++;   
            }
        }
        int l = 0;
        bool odd_check = false;
        for(auto it=M.begin();it!=M.end();it++){
            // odd
            if((it->second)%2){
                l+=(it->second)-1;
                odd_check = true;
            } else {
                l+=(it->second);
            }
        }
        if(odd_check)
            l++;
        return l;
    }
};