class Solution {
public:
    string solve(string s1, string s2){
        int n = s1.size();
        int m = s2.size();
        int i=0,j=0;
        string pre="";
        while(i<n && j<m){
            if(s1[i]==s2[j]){
                pre+=s1[i];
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return pre;
    }

    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        vector<pair<int,string>> v;
        for(int i=0;i<strs.size();i++) v.push_back({strs[i].size(),strs[i]});
        sort(v.begin(),v.end());
        //for(int i=0;i<strs.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl;
        string ans = v[0].second;
        for(int i=1;i<n;i++){
            ans = solve(ans,v[i].second);
        }
        return ans;
    }
};
