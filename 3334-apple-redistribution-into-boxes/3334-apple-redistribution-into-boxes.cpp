class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int maxSum = 0;
        int sum = 0;
        int count = 0;
        int index;

        for (int j : apple) {
            sum += j;
        }
        while(!capacity.empty() && maxSum < sum) {
            int max = 0;
            for (int i = 0; i < capacity.size(); i++) {
                if (capacity[i] > max) {
                    max = capacity[i];
                    index = i;
                }
            }
            capacity.erase(capacity.begin() + index);
            

            if (sum > maxSum) {
                maxSum += max;
                count++;
            }
        }
        return count;
    }
};