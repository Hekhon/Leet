class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> v(256,-1);
        int i=0,j=0,ans=0;
        while(j<n){
            if(v[s[j]]!=-1) i=max(i,v[s[j]]+1);
            v[s[j]]=j;
            ans = max(ans,++j-i);
        }
        return ans;
    }
};
