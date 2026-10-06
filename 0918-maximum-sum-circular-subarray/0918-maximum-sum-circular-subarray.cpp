class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int total = 0;

        int currentMax = 0;
        int maxSum = INT_MIN;

        int currentMin = 0;
        int minSum = INT_MAX;

        for (int num : nums) {
            // Maximum subarray
            currentMax = max(num, currentMax + num);
            maxSum = max(maxSum, currentMax);

            // Minimum subarray
            currentMin = min(num, currentMin + num);
            minSum = min(minSum, currentMin);

            total += num;
        }

        // If all numbers are negative
        if (maxSum < 0) {
            return maxSum;
        }

        // Circular sum = total - minimum subarray
        return max(maxSum, total - minSum);
    }
};

        
    

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna