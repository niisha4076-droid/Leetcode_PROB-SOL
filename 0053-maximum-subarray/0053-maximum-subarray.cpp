class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int maxi = INT_MIN; 
        int prefix = 0;
        
        
        for(int i =0; i<n; i++){
            prefix+= arr[i];
            maxi = max(maxi, prefix);
            if(prefix<0)
            prefix = 0;
        }
        
        return maxi;
    }
};



        
    

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna