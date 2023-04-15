class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        if(n==0) return;
        int i=m;
        while(i<n+m){
            nums1[i]=nums2[i-m];
            i++; 
        }
        sort(nums1.begin(),nums1.end());
    }
};
