class Solution {
public:
    int search(vector<int>& arr, int target) {
        // Current Complexity Analysis:
        // Time: O(N) - The logic is currently incomplete/broken, but the structure aims for Binary Search.
        // Space: O(1)
        // Target Complexity: Time O(log N), Space O(1).

        // COACH HINTS:
        // 1. Syntax Errors: You are using 'arr' and 'targer', but the input parameter is 'nums' and the target is 'target'.
        // 2. Variable Declarations: 'end' and 'mid' are used without being declared (e.g., 'int end').
        // 3. Logic Error: In your 'left side sorted' block, your 'if' condition 'if(arr[start<=targer && arr[mid]>target])' is syntactically invalid and logic-wise misplaced.
        // 4. Logic Error: The 'else' block for the 'Right side sorted' section contains an extra 'else' that will cause a compilation error.
        // 5. Strategy: To solve this, first identify which half is sorted. Then, check if the target lies within the range of that sorted half.

        int start = 0 ,end = arr.size()-1, mid; // Error: 'end' and 'mid' need 'int' type. 'arr' should be 'nums'.

        while(start<=end){

            mid = start + (end-start)/2;

            // 1. find the element
            if(arr[mid] == target)
            return mid;

            // left side sorted
            else if(arr[mid]>= arr[0]){
                // search in left side by checking its constraint
                if(arr[start]<=target && arr[mid]>=target) // Error: Syntax error in condition and typo 'targer'.
                end = mid - 1;
                else
                start = mid+1;
            }

            // Right side sorted
            else{
            if(arr[mid]<target && arr[end]>=target)
            start = mid + 1;
    
            else // Error: This 'else' is dangling and will cause a compile error.
            end = mid -1;

        }

        }
        return -1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna