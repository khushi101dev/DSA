class Solution {
int lowerBound(vector<int>& nums , int n , int x){
    int low = 0 ,high = n-1;
    int ans = n;

    while( low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] >= x){
            ans = mid ;
            high = mid - 1;
        }else
         low = mid  + 1 ;
    }
    return ans ;
}
int upperBound(vector<int>& nums ,int n , int x){
    int low = 0, high = n - 1 ;
    int ans = n;

    while( low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] > x){
            ans = mid ;
            high = mid - 1 ;
        }
        else
         low = mid + 1;
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        int lb = lowerBound(nums, n  , x);
        if(lb == n || nums[lb] != x)
         return {-1,-1};
        int ub = upperBound(nums, n , x);
        return {lb , ub-1};
        
    }
};