class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long expected = n*(n+1)/2;
        long actual = 0;
        for(int num : nums){
            actual += num;
        }
        int diff = expected - actual;
        return diff;

    }
};