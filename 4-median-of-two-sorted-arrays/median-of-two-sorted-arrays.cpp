class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        //double ans = 0;
        
        vector<int> nums3;
        nums3.reserve(m+n);
        
        int t = m+n;
        int j = 0 , i = 0 ;

      while(i < m && j < n){
        if(nums1[i] <= nums2[j]){
            nums3.push_back(nums1[i]);
            i++;
        }else{
            nums3.push_back(nums2[j]);
            j++;
        }
      }
      while(i < m){
        nums3.push_back(nums1[i]);
        i++;
      }
      while(j < n){
        nums3.push_back(nums2[j]);
        j++;
      }

        if(t % 2 == 1){ // odd
         return nums3[t/2];
        }
        else{
            return ((double)nums3[t/2 -1]+nums3[(t/2)])/2.0;
        }
        
    }
};