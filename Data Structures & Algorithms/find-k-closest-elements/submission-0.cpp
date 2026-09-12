class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size() - 1 , n=arr.size();
        vector<int> ans;
        while (l < r) {
            int mid = (l + r) / 2;
            if (arr[mid] < x) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        l--;
        while(r-l<=k){
            if(l>=0 && r<n && abs(arr[l]-x)>abs(arr[r]-x)){
                r++;
            }
            else if(l<0){
                r++;
            }
            else{
                l--;
            }
        }
        for(int i=l+1;i<r;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

