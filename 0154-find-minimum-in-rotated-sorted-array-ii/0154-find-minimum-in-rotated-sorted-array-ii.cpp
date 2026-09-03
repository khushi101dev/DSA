class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , high = n-1;
        int ans = INT_MAX;

        while(low <= high){
            int mid = low + (high - low)/2;
          // when the whole array is sorted
            if(nums[low] <= nums[high]){
                ans = min(ans , nums[low]);
                low++;
                high--;
                continue;
            }
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }
            // left half is sorted
            if(nums[low] <= nums[mid]){
                ans =  min(ans ,nums[low]);
                low = mid+1;

            }else{ // right half is sorted
                high = mid-1;
                ans = min(ans, nums[mid]);
            }
        }
        return ans;
        
    }
};