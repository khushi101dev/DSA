class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {

        unordered_map<int, int> m ;
        vector<int> ans;
        
        int n = nums.size();
       // pairsum = first + second = target , second = target - first 

        for( int i = 0 ; i <  n ; i++){
            int first = nums[i];
            int second = tar - first ;

            if(m.find(second) != m.end()){
                 ans.push_back(i);
                 ans.push_back(m[second]);
                break ;
            }
           m[first] = i ; 
        }

        return ans;
        
    }
};