class Solution {
public:
    long long climbStairs(long long n) {
        if(n<=2) return n;
        long long a = 1,b = 2;
        long long k = n-2;
        while(k>0){
            int temp=b;
            b = b+a;
            a = temp;
            k--;
        }
        return b;
    }
};
