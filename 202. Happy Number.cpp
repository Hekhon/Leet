#define ll long long
class Solution {
public:
    ll get(ll n){
        string s = to_string(n);
        ll num = 0;
        for(ll i=0;i<s.size();i++){
            ll k = int(s[i])-48;
            num = num + k*k;
        }
        return num;
    }
    bool isHappy(ll n) {
        set<ll> s;
        s.insert(n);
        while(true){
            ll jojo = get(n);
            if (jojo==1) return true;
            else if (s.count(jojo)==1) return false;
            else s.insert(jojo),n = jojo;
        }
    }
};
