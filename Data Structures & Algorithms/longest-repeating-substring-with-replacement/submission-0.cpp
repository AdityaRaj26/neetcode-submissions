class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int n = s.size(), maxi = 0, ans = 0, i = 0, j = 0;
        char ch;
        while (j < n) {
            mp[s[j]]++;
            maxi = max(mp[s[j]], maxi);
            while (j - i + 1 - k > maxi) {
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
