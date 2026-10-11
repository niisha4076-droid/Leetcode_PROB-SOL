class Solution {
public:
    int findMin(vector<int>& arr) {
        int start = 0, end = arr.size()-1, ans = arr[0];
        while(start<=end){
            int mid = start + (end-start)/2;

            if(arr[mid]>=arr[0]){
            start = mid + 1;
            }
            else{
            ans = arr[mid]; // assume this would be my ans
            end = mid - 1; // move left side as we assume right side is sorted and   bigger number
        }
        
        }
     
     return ans;
    }
        

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna