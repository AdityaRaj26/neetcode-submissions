class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int i=0;
        for (auto x : nums) {
            st.insert(x);
        }
        for (int num : st) {
            nums[i++] = num;
        }
        return st.size();
    }
};