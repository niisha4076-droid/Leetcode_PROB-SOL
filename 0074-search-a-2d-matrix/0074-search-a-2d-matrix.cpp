class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
      int N = matrix.size(), M = matrix[0].size();
      int row_index , col_index = 0 , start = 0 ,end = N*M-1, mid;

      while(start<=end){

        mid = start + (end-start)/2;
        // find the elemnt of its coordinate
        row_index = mid/M;
        col_index = mid%M;

        if(matrix[row_index][col_index]==target)
        return 1;
        else if(matrix[row_index][col_index]<target)
        start = mid+1;

        else
        end = mid-1;

      }

      return 0;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna