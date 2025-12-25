class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int output = nums.size();
        int n = nums.size() - 1;
        if (nums[0] != 0) {
            output = 0;
        } else {
            for (int i = 0; i < nums.size(); i++) {
                if (i == nums[i]) {
                    continue;
                } else {
                    output = i;
                    break;
                }
            }
        }
        return output;
    }
};