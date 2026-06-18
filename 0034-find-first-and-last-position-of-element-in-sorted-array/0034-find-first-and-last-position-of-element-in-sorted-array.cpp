class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};

        int low = 0;
        int high = nums.size() - 1;
        // Find first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (low >= nums.size() || nums[low] != target) {
            return ans;
        }
        ans[0] = low;

        // Find last occurrence
        high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high-low)/2;

            if(nums[mid] <= target){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        ans[1] = high;
        return ans;
    }
    
};