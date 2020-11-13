class Solution {
public:
    int mySqrt(int x) {
        long long l,r,m;
        l = 0;
        r = x;
        while(l<r) {
            m = (l+r)/2;
            if(m*m == x) {
                return m;
            } else if(m*m < x) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        if(l*l > x) {
            return l-1;
        } else {
            return l;
        }
    }
};