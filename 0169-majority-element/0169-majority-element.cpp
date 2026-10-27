class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate , count = 0 , n= nums.size();
        for(int i =0; i<n; i++){

            if(count ==0){
                count =1;
                candidate = nums[i];
            }

            // if count value is not zero then
            else{

                if(candidate ==nums[i])
                count++;
                else
                count--;
            }
        }
        return candidate;

    }      
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna