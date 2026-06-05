class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int total = 0;
        int cnt = 0;

        sort(cost.begin(), cost.end());

        for (int i = n - 1; i >= 0; i--) {
            if (cnt % 3 != 2)
                total += cost[i];
            cnt++;
        }
        return total;
    }
};