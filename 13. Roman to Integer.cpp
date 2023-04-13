class Solution {
public:
    int func1(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        else return 0;
    }

    int func2(char c1, char c2){
        if(c1=='I' && c2=='V') return 4;
        if(c1=='I' && c2=='X') return 9;
        if(c1=='X' && c2=='L') return 40;
        if(c1=='X' && c2=='C') return 90;
        if(c1=='C' && c2=='D') return 400;
        if(c1=='C' && c2=='M') return 900;
        else return 0;
    }

    int romanToInt(string s) {
        int n=s.size();
        int i=0,num=0;
        while(i<n){
            // first check doubles if does not exist than first.
            if(i<n-1){
                char c1 = s[i];
                char c2 = s[i+1];
                int k = func2(c1,c2);
                num = num+k;
                if(k>0){
                    i+=2;
                    continue;
                }
                else{// k==0.
                    k = func1(c1);
                    num = num+k;
                    i++;
                    continue;
                }
            }
            else{// i==n-1 i.e i came to last char.
                char c1 = s[i];
                int k = func1(c1);
                num = num+k;
                i++;
                continue;
            }
        }
        return num;
    }
};
