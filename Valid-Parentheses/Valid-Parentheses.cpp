class Solution {
public:
    int open(char c){
        if(c==40)
            return 0;
        if(c==91)
            return 1;
        if(c==123)
            return 2;
        return -1;
    }
    
    int close(char c){
        if(c==41)
            return 0;
        if(c==93)
            return 1;
        if(c==125)
            return 2;
        else
            return -1;
    }
    
    bool check(stack<char> &S, char c){
        if(S.empty()){
            if(open(c)!=-1){
                S.push(c);
                return true;                
            } else {
                return false;
            }
        }
        
        int l = open(S.top());
        int r = close(c);
        if(l==r){
            S.pop();
            return true;            
        }
        else if(l == -1){
            return false;
        } else if (r == -1){
            S.push(c);
            return true;
        } else {
            return false;
        }
            
    }
    
    bool isValid(string s) {
        if(s.length() == 0)
            return true;
        else {
            stack<char> S;
            for(int i=0;i<s.length();i++){
                if(!check(S, s[i]))
                    return false;
            }
            if(S.empty())
                return true;
            else
                return false;
        }
        
    }
};