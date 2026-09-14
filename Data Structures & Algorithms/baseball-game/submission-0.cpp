class Solution {
   public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        int ans=0;
        for (int i = 0; i < op.size(); i++) {
            if (op[i] == "+") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x + y);
            } else if (op[i] == "C") {
                st.pop();
            } else if (op[i] == "D") {
                int x = st.top();
                st.push(x * 2);
            }
            else{
                st.push(stoi(op[i]));
            }
        }
        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};