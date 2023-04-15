class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = 0,carry=1;
        vector<int> ans;
        reverse(digits.begin(),digits.end());
        while(i<n or carry==1){
            if(i==n) {ans.push_back(1);break;}
            int k = digits[i]+carry;
            if(k<10){
                ans.push_back(k);
                carry = 0;
            }
            else{
                carry = 1;
                ans.push_back(0);
            }
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
