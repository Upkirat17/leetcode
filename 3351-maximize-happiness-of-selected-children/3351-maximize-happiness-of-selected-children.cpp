class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long final = 0;
        int n = happiness.size() - 1;
        sort(happiness.begin(), happiness.end());
        for (int i = 0; i < k; i++) {
            if (happiness[n - i] - i <= 0) {
                break;
            } else {
                final += happiness[n - i] - i;
            }
        }

        return final;
    }
};