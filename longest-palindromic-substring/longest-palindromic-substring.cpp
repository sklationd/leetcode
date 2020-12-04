class Solution {
public:
    int A[1001][1001] = {0,};
    
    int check(string &s, int i, int j){
        if(A[i][j]!=0)          return A[i][j];
        if(i==j)                return (A[i][j] = 1);
        if(s[i] == s[j]){
            if(j-i == 1)            return (A[i][j] = 2);
            int sub = check(s,i+1,j-1);
            if(sub == -1)           return (A[i][j] = -1);
            return (A[i][j] = sub + 2);
        } else {
            return (A[i][j] = -1);
        }
    }
    
    string longestPalindrome(string s) {
        int start;
        int max_len = -1;
        
        for(int i=0;i<s.size();i++){
            for(int j=s.size()-1;j>=i;j--){
                int r = check(s,i,j);
                if(max_len < r){
                    start = i;
                    max_len = r;
                }
            }
        }
        return s.substr(start,max_len);
    }
};

// class Solution {
// public:
//     string longestPalindrome(string s) {
        
        
//         int n=s.size();
//         int i=0;
//         int ans=1, st=0;
//         while(i<n)
//         {
//             int l=i, r=i;
//             while(r<n-1 && s[r]==s[r+1])r++;
//             i=r+1;
//             while(l>0 && r<n-1 && s[l-1]==s[r+1])
//             {
//                 l--;
//                 r++;
//             }
//             int len=r-l+1;
//             if(len>ans)
//             {
//                 st=l;
//                 ans=len;
//             }
//         }
//         return s.substr(st, ans);
        
//     }
// };