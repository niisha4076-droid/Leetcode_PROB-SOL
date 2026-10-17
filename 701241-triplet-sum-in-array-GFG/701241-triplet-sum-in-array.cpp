class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
         int n = arr.size();
        // sort the array
        for(int i =n-2; i>=0;i--){
            for(int j = 0; j<=i; j++){
                if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
            }
        }
        
        for(int i = 0; i<n-2; i++){
            int ans = target-arr[i];
            int start = i+1, end = n-1;
            while(start<end){
                if(arr[start]+arr[end]==ans)
                return 1;
                
                else if(arr[start]+arr[end]>ans)
                end--;
                
                else
                start++;
                
            }
        }
         return 0;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna