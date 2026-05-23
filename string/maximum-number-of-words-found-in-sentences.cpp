class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN;
        for(int i = 0;i<sentences.size();i++){
            string st = sentences[i];
         int space = 0;
         for(int j = 0;j<st.length();j++){
            if(st[j] == ' '){
                space++;
            }
         }
         int totalwords = space+1;
          if(totalwords>maxi){
            maxi = totalwords;
          }
          
        }
        return maxi;
    }
};