class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        // find XOR
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