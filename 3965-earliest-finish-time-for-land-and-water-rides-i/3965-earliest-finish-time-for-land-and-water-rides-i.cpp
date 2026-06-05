class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        long long ans = LLONG_MAX;
        int n = landStartTime.size();
        int m = waterStartTime.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long long landFirst = max((long long)landStartTime[i] + landDuration[i], (long long) waterStartTime[j]) + waterDuration[j];

                long long waterFirst = max((long long)waterStartTime[j] + waterDuration[j], (long long) landStartTime[i]) + landDuration[i];

                ans = min(ans, min(landFirst, waterFirst));
            }
        }
        return (int)ans;
    }
};