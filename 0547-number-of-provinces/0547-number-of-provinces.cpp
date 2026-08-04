class Solution {
void dfs( int i , vector<vector<int>>& adj , vector<bool> &vis ){
    vis[i]= true;

    for(int j = 0; j < adj[i].size() ; j++){
        if( adj[i][j] == 1 && !vis[j])
          dfs(j ,  adj , vis);

    }
}

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
      int n = isConnected.size();  
    int numOfProvinces = 0;

      vector<bool> vis( n , false);
      for( int i = 0 ; i<n ; i++){ 
         if(!vis[i]){ 
             dfs(i , isConnected , vis);
             numOfProvinces++;
         }
    }
    return numOfProvinces;
    }
};