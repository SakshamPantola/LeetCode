class Solution {
public:
    string defangIPaddr(string address) {
      string ans ="";
        stack<char> st;
        for(int i =0;i<address.length();i++){
            
                if(address[i] == '.'){
                   
                    st.push('[');
                    st.push('.');
                    st.push(']');
                }else{
                    st.push(address[i]);
            }
        }
                while(!st.empty()){
            char z = st.top();
            st.pop();
            ans.push_back(z);
        }

        reverse(ans.begin(),ans.end());

        return ans;


    }
};