class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int m = (l+r)/2;
        while(l<=r){
            if(l==r) return l;
            m = (l+r)/2;
            if(nums[m]>nums[m+1]) r=m;
            else l=m+1;
        }
        return l;
    }
};
