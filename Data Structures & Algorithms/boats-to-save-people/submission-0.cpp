class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size() , i=0 , j=people.size()-1,ans=0;
        while(i<=j){
            if(j>i){
                if(people[j]+people[j-1]<=limit){
                    j--;j--;
                }
                else if(people[j]+ people[i]<=limit){
                    i++;j--;
                }
                else j--;
            }
            else{
                j--;
            }
            ans++;
        }
        return ans;
    }
};