class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // hire kro ,  kaam dekho agr kaam ho rha means sum >= target toh fire krna start kro .
        // hiring , high++ then  sum + arr[high] , firing -> sum - arr[low] then low++ 
        
        int  low = 0 , high = 0;
        int n = nums.size();
        int sum = 0;
        int res = INT_MAX;
        while( high < n){
            sum += nums[high]; // hire ( starting me toh hiring krna hoga n )
             
             // this while loop is for ki jab tak kaam ho rha hai find len , store it in answer and fire 
             while( sum >= target){
               int len = high - low +1;
                res = min( res, len);

                sum -= nums[low];
                low++;
             }
             high++;
        }
    return res == INT_MAX ? 0 : res;
        
    }
};