class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        if(n > m)
            return findMedianSortedArrays(nums2, nums1);
        
        
        int C = (n + m + 1) / 2;
        // left limit of candidate 
        int l = 0;
        // right limit of candidate
        int r = n;
        
        
        while(l<=r){
            // number of left part of nums1
            int pivot1 = (l+r) / 2;
            // index of last left part of nums2
            int pivot2 = C-pivot1;
            if(pivot1 < r && nums2[pivot2-1] > nums1[pivot1]){
                l = pivot1 + 1;
            } else if (pivot1 > l && nums1[pivot1-1] > nums2[pivot2]){
                r = pivot1 - 1;
            } else {
                int L = 0;
                if(pivot1==0) L = nums2[pivot2 - 1];
                else if(pivot2==0) L = nums1[pivot1 - 1];
                else L = max(nums1[pivot1-1],nums2[pivot2-1]);
                if((n+m)%2) return L;
                
                int R = 0;
                if(pivot1==n) R = nums2[pivot2];
                else if(pivot2==m) R = nums1[pivot1];
                else R = min(nums1[pivot1], nums2[pivot2]);
                
                return (L+R)/2.0;       
            }
        }
        return 0.0;
    }
};