class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i1=0;
        int i2=0;
        vector<int> V;
        
        for(i1=0;i1<nums1.size();i1++){
            while(i2 < nums2.size() && nums2[i2] < nums1[i1]){
                V.push_back(nums2[i2++]);
            }
            V.push_back(nums1[i1]);
        }
        for(;i2<nums2.size();i2++) V.push_back(nums2[i2]);

        if(V.size()%2){
            return V[V.size()/2];
        } else {
            return (V[V.size()/2] + V[V.size()/2 - 1]) / 2.0;
        }
    }
};