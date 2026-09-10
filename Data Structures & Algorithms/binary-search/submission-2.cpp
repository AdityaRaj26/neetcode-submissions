class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long n=nums.size();
        long long start=0,end=n-1;
        while(start <= end){
            long long mid = (end-start)/2 + start;
            if(nums[mid] == target) return mid;
            else if(nums[mid]<target) start=mid+1;
            else end=mid-1;
        }
        return -1;
    }
};
