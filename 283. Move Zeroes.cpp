class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n && nums[i]!=0) i++;
        int j=i;
        while(j<n-1){
            if(nums[j+1]!=0) {swap(nums[j+1],nums[i]);i++;}
            else j++;
        }
    }
};
