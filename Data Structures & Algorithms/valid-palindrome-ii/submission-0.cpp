class Solution {
public:
    bool isValid(string s,int l,int e){
        while(l<=e){
            if(s[l++]!=s[e--])return false;
        }
        return true;
    } 
    bool validPalindrome(string s) {
        int l=0,e=s.size()-1;
        while(l<=e){
            if(s[l]!=s[e]){
                return isValid(s,l+1,e) || isValid(s,l,e-1);
            }
            l++;e--;
        }
        return true;
    }
};