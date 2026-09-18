class Solution {
public:
    bool isAlphaNum(char c){
        if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9' ){
            return true;
        }else{
            return false;
        }
    }
    bool isPalindrome(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            while(l<r && !isAlphaNum(s[l])){
                l++;
            }
            while(l<r && !isAlphaNum(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
