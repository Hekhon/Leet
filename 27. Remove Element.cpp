class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0,k=n-1;
        while(i<=k){
            if(nums[k]==val) k--;
            else if(nums[i]==val){
                swap(nums[i],nums[k]);
                i++;
                k--;
            }
            else i++;
        }
        return i;
    }
};
