class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,n=word1.size(),m=word2.size();
        string s="";
        while(i<n || i<m){
            if(i<n){
                s+=word1[i];
            }
            if(i<m){
                s+=word2[i];
            }
            i++;
        }
        return s;
    }
};