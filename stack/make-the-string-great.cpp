class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(!st.empty() &&(st.top()+32 == s[i] || st.top()-32 == s[i]) ){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        int j = 0;
        vector<char>x;
        while(!st.empty()){
            x.push_back(st.top());
            st.pop();
            j++;
        }
        reverse(x.begin(),x.end());
        string ans(x.begin(),x.end());  // this is changing my characters to a single string
        
        return ans;
    }
};