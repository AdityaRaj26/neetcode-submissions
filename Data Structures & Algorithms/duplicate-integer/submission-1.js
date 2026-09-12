class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        const st = new Set();

        for (const value of nums) {
            if (st.has(value)) {
                return true;
            }
            st.add(value);
        }

        return false;
    }
}