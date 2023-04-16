class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto it=nums.begin();it<nums.end();it++){
            ans = ans^(*it);
        }
        return ans;
    }
};
