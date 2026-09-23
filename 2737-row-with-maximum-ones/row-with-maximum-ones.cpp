class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        int max_count = -1;
        int index = 0;

        vector<int> ans {index,max_count};

        for(int i =0; i < m ; i++){
            int countrow = 0;
            for(int j = 0 ; j < n; j++){
                countrow += mat[i][j];
            }
            if(countrow > max_count){
                max_count = countrow;
                index = i ;
            }
        }
        return ans = {index,max_count};
    }
};