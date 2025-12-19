class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> A(nums.size());

        for (int x = 0; x < nums.size(); x++) {
            for (int i = 0; i < nums.size(); i++) {
                A[i] = nums[(i + x) % nums.size()];
            }
            int count = 0;
            for (int i = 0; i < A.size() - 1; i++) {
                if (A[i] <= A[i + 1]) {
                    count++;
                }
            }

            if (count == A.size()-1)
                return true;
            }
            return false;
        }
    };