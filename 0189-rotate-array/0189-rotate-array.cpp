class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> output(n);
        k = k%n;
        for(int i = 0;i < n;i++){
            output[(i+k)%n] = nums[i];
        }
        for(int i = 0;i < n;i++){
            nums[i] = output[i];

        }
    }
};