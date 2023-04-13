// Not so optimised ig..

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        if(x<0) return false;
        while(x>0){
            v.push_back(x%10);
            x=x/10;
        }
        vector<int> r=v;
        reverse(r.begin(),r.end());
        if(r==v) return true;
        else return false;

    }
};
