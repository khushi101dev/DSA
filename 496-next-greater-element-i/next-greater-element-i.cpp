class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        // we will solve this in two steps 1st. find out the next greater element of nums2 and store it into an unordered map . 2nd - for every element of nums1 search in the map for their next greater elemnt.

        unordered_map<int ,  int> m ;
        stack<int> s;
        int n2 = nums2.size();

        for( int i = n2 - 1 ; i >=0 ; i--){
            while(!s.empty() && s.top() <= nums2[i]){
                s.pop();
            }
            if(s.empty()){ 
              m[nums2[i]] = -1;
            }
            else{ 
             m[nums2[i]] = s.top();
            }
        
            s.push(nums2[i]);
        }

        vector<int> ans;

        for( int i = 0; i < nums1.size() ; i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};