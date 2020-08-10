#define MAX_INT 2147483647
class Solution {
public:
    int reverse(int x) {
        if(x==0) return 0;
        else {
            while(x%10==0)
                x/=10;
        }
        int r = 0;
        while(x){
            if(r > (MAX_INT/10) || r < -(MAX_INT/10))
                return 0;
            r = 10*r + x%10;
            x/=10;
        }
        return r;
    }
};