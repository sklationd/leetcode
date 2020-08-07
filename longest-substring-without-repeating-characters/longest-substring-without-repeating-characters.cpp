#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> *T = new unordered_map<char,int>();
        int M = 0;
        int index = 0;
        for(int i=0;i<s.length();){
            auto it = T->find(s[i]);
            if(it == T->end()){
                T->insert(make_pair(s[i],i));
                i++;
            } else {
                if(M < T->size())
                    M = T->size();
                i=it->second + 1;
                delete T;
                T = new unordered_map<char,int>();
            }
        }
        if(M < T->size())
            M = T->size();
        delete T;
        
        return M;
    }
};