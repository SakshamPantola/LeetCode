class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> need;
        unordered_map<char,int> have;
        for(auto i: text){
            have[i]++;
        }
        
        string givenText = "balloon";
        for(auto i: givenText){
            need[i]++;
        }
    int res = INT_MAX;
    for(auto x: need){
        char ch = x.first;      // took char at that iteration
        int occrneed = x.second; // took count of that char which we need
        int occrhave = have[ch]; // took count of that char which we already have 
        int times = occrhave/occrneed;  // use this to check how many times we can use a character to make our string balloon for ex--> let say need = 2 and have = 3 then we can form our balloon by 1 time --> 2/3 = 1 -->   need = "aa" , have = "asaba" we can use our 2 aa at once to make the string aa but next time we only left with one a which is not possible to generate "aa" again  
        res = min(times,res);   // using min to get the ans as the least one can help us to form all string as if we have  "have" ->> a = 3 and b = 1 and need = aab then we can form it only by once as at first time it will take aab then we only left with "a" which is not possible to make that string again 

// better have ->> a = 3 b = 2 c = 8 g=6 and need -->> a = 2 b = 1 and x = 4; here we dont have x so we can generate it and hence the ans will generated as 0 in min and that ans is correct

    }

return res;
    }
};