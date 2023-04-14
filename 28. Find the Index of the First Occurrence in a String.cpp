class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i=0;
        while(i<=(n-m)){
            if(haystack[i]!=needle[0]){
                i++;
            }
            else{
                int dp=i;
                int j=0;
                while(j<m){
                    if(haystack[dp]!=needle[j]) break;
                    else{
                        dp++;
                        j++;
                    }
                }
                if(j==m) return i;
                i++;
            }
        }
        return -1;
    }
};
