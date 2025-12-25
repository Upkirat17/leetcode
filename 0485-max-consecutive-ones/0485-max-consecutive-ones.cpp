class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int fc = 0;
        int tc = 0;
        for (int i : nums) {
            if (i != 1) {
                tc = 0;
                continue;
            } else {
                tc++;
            }
            if (fc < tc) {
                fc = tc;
            }
        }

        return fc;
    }
};