#define MAX_INT 2147483647

class Solution {
public:
    int myAtoi(string str) {
        int p=0;
        while(str[p]==' ') {
            p++;
        } 
        
        bool neg = false;
        if(str[p] == '-') {
            neg = true;
            p++;
        } else if(str[p] == '+'){
            p++;
        }
        
        int r = 0;
        while((str[p]-'0') >= 0 && (str[p]-'0') <= 9){
            if((r > (MAX_INT/10)) || (r == (MAX_INT/10) && str[p]-'0' > 7)){
                return MAX_INT;                
            } else if((r < -(MAX_INT/10)) || (r == -(MAX_INT/10) && str[p]-'0' > 8)){
                return -MAX_INT-1;
            }
            if(neg)
                r = 10*r - (str[p++]-'0');
            else 
                r = 10*r + (str[p++]-'0');
        }
        
        return r;
    }
};