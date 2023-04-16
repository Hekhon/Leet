class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        v[0].push_back(1);
        for(int i=1;i<numRows;i++){
            // contains(i+1) numbers
            int carry=0,j=0;
            while(j<i){
                v[i].push_back(carry+v[i-1][j]);
                carry = v[i-1][j];
                j++;
            }
            v[i].push_back(carry);
        }
        return v;
    }
};
