class Solution {
public:
    int digit(int n, int d){
        return (n/(int)pow(10,d))%10;
    }
    
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else if(x==0)
            return true;
        else{
            int d = floor(log10(x));
            for(int i=0;i<=d/2;i++){
                if(digit(x,i)!=digit(x,d-i)){
                    return false;
                }
            }
            return true;
        }
        
    }
};