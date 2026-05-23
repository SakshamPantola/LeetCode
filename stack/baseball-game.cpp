class Solution {
public:
    int calPoints(vector<string>& operations) {

            int n = operations.size();
            int i=0;
            stack<int> s;
            int totalsum = 0;
            while(i<n){

                string x = operations[i];
               
                if(x == "+"){
                   int top1 = s.top();
                   s.pop();
                   int top2 = s.top();
                   s.push(top1);
                   s.push(top1+top2);

                }else if(x == "D"){
                    s.push(2*s.top());
                }else if(x == "C"){
                    s.pop();
                }else{
                    s.push(stoi(x));
                }

                i++;
                }
            
                int x = s.size();
          for(int i = 0 ; i<x;i++){
            totalsum += s.top();
            s.pop();
          }
               
        return totalsum;
    }
};