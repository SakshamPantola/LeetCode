class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        stack<char> st;
        for(int i = 0;i<size;i++){
            st.push(s[i]);
        }
        int i = 0;
        while(!st.empty()){
            s[i]  = st.top();
            st.pop();
            i++;
        }

    }
};