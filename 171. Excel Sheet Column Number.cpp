#define ll long long
class Solution {
public:
    ll titleToNumber(string s) {
        ll p = 0,num = 0;
        for(ll i = s.size()-1;i>=0;i--){
            num = num + pow(26,p)*(s[i]-64);
            p++;
        }
        return num;
    }
};
