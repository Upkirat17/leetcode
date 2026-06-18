class Solution {
public:
    int search(vector<int>& nums, int target) {
        int rot = 0;
        int i = 0;
        while (i < nums.size() - 1) {
            if (nums[rot] < nums[rot + 1]) {
                rot++;
                i++;
            } else {
                break;
            }
        }

        sort(nums.begin(), nums.end());

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return (mid + rot+1)%(nums.size());
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};