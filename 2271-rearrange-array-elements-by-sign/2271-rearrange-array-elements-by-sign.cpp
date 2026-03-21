class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int posIndex = 0;
        int negIndex = 1;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                result[posIndex] = nums[i];
                posIndex = posIndex + 2;
            }
            if(nums[i]<0){
                result[negIndex] = nums[i];
                negIndex = negIndex + 2;
            }
        }
        return result;
    }
};