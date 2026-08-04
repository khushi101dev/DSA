class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n  = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int i ;
      //  int diff = nums[i+1] -  nums[i];
        for(i = 0; i < n - 1; i++){
           for( int j = nums[i] + 1 ; j < nums[i + 1]; j++){ 
             ans.push_back(j);
           }
        }

        return ans;

    }
};