class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        bool ans = false;
        v.push_back(s[0]);
        int i=1;
        while(i<s.size()){
            int n = v.size();
            if(n==0) v.push_back(s[i]);
            else if(v[n-1]=='(' && s[i]==')') v.pop_back();
            else if(v[n-1]=='[' && s[i]==']') v.pop_back();
            else if(v[n-1]=='{' && s[i]=='}') v.pop_back();
            else v.push_back(s[i]);
            i++;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        if(v.size()==0) ans = true;
        return ans;
    }
};
