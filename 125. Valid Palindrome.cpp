class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            int p=s[i],q=s[j];
            if(!isalnum(s[i])) i++;
            else if(!isalnum(s[j])) j--;
            else if(isdigit(p) || isdigit(q)){
                if (p!=q) return false;
                i++,j--;
            }
            else if((p==q) || (abs(p-q)==32)) {i++;j--;}
            else return false;
        }
        return true;
    }
};
