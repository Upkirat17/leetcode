    class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();
            vector<int> result;
            int top = 0, bottom = m - 1;
            int left = 0, right = n - 1;

            while (top <= bottom && left <= right) {
                int i = top, j = left;
                while (j <= right) {
                    result.push_back(matrix[i][j]);
                    j++;
                }
                top++;

                i = top, j = right;
                while (i <= bottom) {
                    result.push_back(matrix[i][j]);
                    i++;
                }
                right--;

                if(top<=bottom){
                    i = bottom, j = right;
                    while(j>=left){
                        result.push_back(matrix[i][j]);
                        j--;
                    }
                    bottom--;
                }
                if(left<=right){
                    i=bottom, j = left;
                    while(i>=top){
                        result.push_back(matrix[i][j]);
                        i--;
                    }
                    left++;
                }

 
            }
            return result;
        }
    };