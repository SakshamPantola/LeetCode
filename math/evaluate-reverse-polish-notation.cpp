class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
       for(auto x: tokens){
        if(x == "+" || x == "-" || x == "*" || x=="/"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

        if(x == "+") st.push(a+b);
        else if(x=="-") st.push(b-a);
        else if(x=="*") st.push(a*b);
        else st.push(b/a);
        }else{
            st.push(stoi(x));
        }
       }
       return (int)st.top();
    }
};