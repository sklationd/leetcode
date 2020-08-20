class Solution {
public:
    
    string func(string s){
        char c;
        int i = 0;
        string result = "";
        
        while(i<s.size()){
            c = s[i];
            int count = 0;    
            while(i<s.size()){
                if(s[i] == c) count++;
                else break;
                i++;
            }
            result += to_string(count);
            result += c;
        }
        return result;
    }
    
    string countAndSay(int n) {
        if(n==1){
            return "1";
        } else {
            return func(countAndSay(n-1));
        }
    }
};