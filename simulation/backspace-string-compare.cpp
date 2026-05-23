class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> st;
        stack<char> end;

        

        for(int i = 0;i<s.size();i++){

            if(s[i]== '#'){
                if(!st.empty()){
                st.pop();
            }
            }else{
            st.push(s[i]);
        } 
    }

    for(int j = 0;j<t.size();j++){
        if(t[j] == '#'){
            if(!end.empty()){
            end.pop();
            }
        }else{
            end.push(t[j]);
        }
    }
        if(st.size() != end.size()){
            return false;
        }
        
        while(!st.empty() && !end.empty()){
            if(st.top() == end.top()){
                st.pop();
                end.pop();
            }else{
                return false;
            }
        }
        return true;
    }
};