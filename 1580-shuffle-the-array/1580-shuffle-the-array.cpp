class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int y = n;
        vector<int> ans;
        ans.reserve(2*n);
        for(int i = 0;i<y;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+y]);
        }
        return ans;
    }
};