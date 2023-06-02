class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    		int k = target;
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.count(k-nums[i])){
                return {m[k-nums[i]],i};
            }
            m[nums[i]]=i+1;
        }
        return {0};
    }
};
