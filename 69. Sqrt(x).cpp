#define ll long long
class Solution {
public:
    ll mySqrt(ll x) {
        if(x==0 || x==1) return x;
        ll high = (x+1)/2;
        ll low = 1;
        while(low<high){
            ll mid = (low+high)/2;
            ll k = x - mid*mid;
            if(k<0) high = mid;
            else if(k==0) return mid;
            else if(k>0 && k<2*mid+1) return mid;
            else low = mid+1;
        }
        return low;
    }
};
