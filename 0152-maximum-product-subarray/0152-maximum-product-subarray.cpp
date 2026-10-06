class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentMax = nums[0];
        int currentMin = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int num = nums[i];

            // Negative number swaps max and min
            if (num < 0) {
                swap(currentMax, currentMin);
            }

            currentMax = max(num, currentMax * num);
            currentMin = min(num, currentMin * num);

            ans = max(ans, currentMax);
        }

        return ans;
    }
};

        


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna