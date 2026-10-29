class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0); // space taken for lower case
        vector<int>upper(26,0); // space taken for upper case

        // frequency updated
        for(int i =0; i<s.size(); i++){ // input for string
         
         if(s[i]>='a')
           lower[s[i]-'a']++;

           else
           upper[s[i]-'A']++;
        }

        

        int count = 0;  
        bool odd = 0; // input string contain odd no. of charcter directly added as 1

        for(int i =0; i<26; i++){

            if(lower[i]%2==0)
            count+=lower[i]; 
            
             else{

             count+=lower[i]-1;
             odd= 1;
             }
             

        // for uppper case

        if(upper[i]%2==0)
            count+=upper[i]; 
        
             else{

             count+=upper[i]-1;
             odd= 1;
             }
             

        }

        return count + odd;
    }
     
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna