class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int m = t1.size();
        int n = t2.size();
        int c[m+1][n+1];
        for(int i=0;i<m+1;i++) c[i][0] = 0;
        for(int j=0;j<n+1;j++) c[0][j] = 0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(t1[i-1]==t2[j-1]) c[i][j] = c[i-1][j-1]+1;
                else c[i][j] = max(c[i-1][j],c[i][j-1]);
            }
        }
        return c[m][n];
    }
};
