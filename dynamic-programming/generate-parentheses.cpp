class Solution {
public:

    vector<string> validate;

    void valid(string s,int open,int close){
        if(open == 0 && close == 0){
            validate.push_back(s);
            return;
        }
        if(open>0){
            s.push_back('(');
            valid(s,open-1,close);
            s.pop_back();
        }
        if(close>0 && open<close){
            s.push_back(')');
            valid(s,open,close-1);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string s;
        valid(s,n,n);
        return validate;
    }
};


