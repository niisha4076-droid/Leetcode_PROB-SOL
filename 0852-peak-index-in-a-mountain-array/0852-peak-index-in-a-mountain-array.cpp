class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // COACH REVIEW:
        // Your current approach uses Binary Search, which is optimal (O(log N) Time, O(1) Space).
        // However, there are several syntax and logic errors preventing it from compiling/running:
        // 1. Syntax Error: 'arr,size()' should be 'arr.size()'.
        // 2. Logic Error: The 'while' loop is missing curly braces { }, so only the 'mid' calculation is repeating.
        // 3. Syntax Error: '>>' is a bitwise shift operator. You meant '>' for comparison.
        // 4. Edge Case: accessing 'arr[mid-1]' or 'arr[mid+1]' when mid is 0 or size-1 can cause segmentation faults.
        // 5. Logic Error: The 'return -1' is outside the function scope due to misplaced curly braces.

        int start = 0, end = arr.size()-1, mid;
        while(start <= end) {
            mid = start + (end - start) / 2;

            // Peak element condition
            // Ensure mid is not at the boundaries to avoid out-of-bounds access
            if(mid > 0 && mid < arr.size() - 1 && arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
                return mid;
            }
            // Right side move: we are on the ascending slope
            else if(mid < arr.size() - 1 && arr[mid] < arr[mid+1]) {
                start = mid + 1;
            }
            // Left side move: we are on the descending slope
            else {
                end = mid - 1;
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna