class Solution {
public:
bool isPossible(vector<int>& nums , int mid , int k){
    int subarrays = 1 ;
    int sum = 0;

    for(int i = 0; i < nums.size(); i++){

        if(nums[i] > mid){
            return false;
        }
        if(nums[i] + sum > mid ){
            subarrays++;
            sum = nums[i];
        }else{
            sum += nums[i];
        }
    }
    return subarrays <= k;

}
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        int n = nums.size();
        if(k > n)
         return -1;

         while(low <= high){
            int mid = low + (high - low)/2;
            if(isPossible(nums, mid , k)){
                high = mid -1 ;
            }
            else{
                low = mid + 1;
            }
         }
         return high+1;
        
    }
};