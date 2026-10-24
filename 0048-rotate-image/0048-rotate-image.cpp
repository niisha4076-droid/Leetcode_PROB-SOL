class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
    // TRANPOSE THE MATRIX
        for(int i =0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
            //REVERSING THE ROW
            for(int i=0; i<n; i++){
             int start =0, end = n-1;
             while(start<end){
             swap(matrix[i][start], matrix[i][end]);
             start++ , end--;
            }
            }  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna