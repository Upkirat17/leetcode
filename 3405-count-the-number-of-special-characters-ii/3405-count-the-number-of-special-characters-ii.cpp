class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> state(26, 0);

        for (char ch : word) {
            int idx = tolower(ch) - 'a';

            if (islower(ch)) {
                if (state[idx] == 0) {
                    state[idx] = 1;
                } else if (state[idx] == 2) {
                    state[idx] = -1;
                }
            }

            else {
                if (state[idx] == 0) {
                    state[idx] = -1;
                } else if (state[idx] == 1) {
                    state[idx] = 2;
                }
            }
        }
        int count = 0;
        for (int x : state) {
            if (x == 2) {
                count++;
            }
        }
        return count;
    }
};