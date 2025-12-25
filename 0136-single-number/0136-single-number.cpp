class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int output;
        for (int i = 0; i < nums.size(); i++) {
            int count = 1;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] != nums[j] || i==j) {
                    continue;
                } else {
                    count++;
                }
            }
            if (count > 1) {
                continue;
            } else {
                output = nums[i];
                break;
            }
        }
        return output;
    }
};