class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=1;
        while(j<n){
            if (nums[j]==nums[i]) j++;
            else { 
                swap(nums[i+1],nums[j]);
                i++;
                j++;
            }
        }
        return i+1;
    }
};
