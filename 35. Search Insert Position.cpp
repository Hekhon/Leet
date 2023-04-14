class Solution {
public:
    int l,r;
    int bs(vector<int>& nums, int k, int l,int r){
        int m=(l+r)/2;
        if (l==r){
            if(nums[l]<k) return l+1;
            else return l;
        }
        else if(k<nums[m]) r=m;
        else if(k>nums[m])l=m+1;
        else if(k==nums[m]) return m;
        int jj = bs(nums, k,l,r);
        return jj;
    }
    int searchInsert(vector<int>& nums, int target) {
        // binary search .
        int n = nums.size();
        int ans = bs(nums,target,0,n-1);
        return ans;
    }
};
