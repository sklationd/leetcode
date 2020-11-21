class Solution {
public:
    int xorOperation(int n, int start) {
        int xo = -1;
        for(int i=0;i<n;i++){
            int curr = start + 2*i;
            if(xo == -1) xo = curr;
            else xo = xo ^ curr;
        }
        return xo;
    }
};