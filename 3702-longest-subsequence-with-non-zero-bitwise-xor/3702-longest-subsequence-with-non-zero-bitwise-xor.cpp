class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        // find XOR of whole array , if it is not zero then the required length of subsequence is the length of the array cz any length can't be greater than n .
        // if the XOR of whole array is 0 then find out any one non zero element and remove it from the array then XOR becomes non zero ( length = n -1) if there is no non zero elements then return 0 that means there is no such subsequence in this particular array for which the XOR is non zero.
        
        int xr = 0;
        int n = nums.size();
        int ans = 0;
        for( int i = 0 ; i < n; i++){
            xr ^= nums[i];
        }

        if( xr != 0){
            ans = n ;
        }
        else{
            bool hasNonZero = false;

            for( int i = 0 ; i < n ; i++){
                if( nums[i] != 0){
                    hasNonZero = true;
                    break;
                }
            }
            if(hasNonZero){
                ans = n - 1;
            }else
              ans = 0;
        }

        return ans;
    }
};