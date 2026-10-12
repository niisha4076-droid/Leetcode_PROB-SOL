class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 0 , end = 0 , mid , ans , n = piles.size();
        long long sum =0;

        for(int i =0; i<n; i++){
            sum+=piles[i];
            end = max(end , piles[i]);  
        }
        start=sum/h;
        if(!start) // if h is larger value and sum becomes smaller to it quotient can be zero
        start = 1; // h ..is total time in which koko have to eat all banana

        while(start<=end)
        {
            mid = start +(end-start)/2;
            // mid amount of banana to consume in 1 hour
            int total_time = 0;
            for(int i =0; i<n; i++){
                 total_time+= piles[i]/mid;
                 if(piles[i]%mid) // if piles[i] = 3, mid = 2 ...3/2 = 1.5 so 0.5 time will calculate as 1 then total_time++
                 total_time++;
            }

            if(total_time>h){// have to increase rate of eating banana per hour have to increase the mid value shifting to right side
            start = mid+1;
            }
            else{
                ans = mid; // if ans<h so we will decrease the speed of eating bnana
                end = mid-1;
            }


        }
        return ans;


    }




        
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna