class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> mp;
        for(char ch:word){
            char lower = tolower(ch);

            if(islower(ch)){
                if(mp.find(lower)==mp.end()){
                    mp[lower] = 1;
                } else if(mp[lower]==2){
                    mp[lower] = -1;
                }
            }

            else {
                if(mp.find(lower)==mp.end()){
                    mp[lower] = -1;
                } else if(mp[lower] == 1){
                    mp[lower]=2;
                }
            }
        }
        int count = 0;
        for(auto it : mp) {
            if(it.second == 2){
                count++;
            }
        }

        return count;
    }
};