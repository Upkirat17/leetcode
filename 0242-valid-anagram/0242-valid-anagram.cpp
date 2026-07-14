class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for (char x : s) {
            map1[x]++;
        }

        for (char x : t) {
            map2[x]++;
        }

        for (char x : s) {
            if (map1[x] != map2[x])
                return false;
        }

        return true;
    }
};