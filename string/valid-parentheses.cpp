class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                char top = st.top();
                char c = s[i];
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};