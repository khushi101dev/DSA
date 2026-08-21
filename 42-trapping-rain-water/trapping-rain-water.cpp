class Solution {
public:
    int trap(vector<int>& ht) {
        int water = 0 ;
        int n  = ht.size();
        vector<int> Lmax(n,0);
        vector<int> Rmax(n,0);

        Lmax[0] = ht[0];
        Rmax[n-1] = ht[n-1];

        for( int i = 1 ; i < n; i++){
            Lmax[i] = max(Lmax[i-1] , ht[i]);
        }

        for( int i = n-2 ; i >= 0 ; i--){
            Rmax[i] = max(Rmax[i+1] , ht[i]);
        }

        for( int i = 0 ; i < n ; i++){
            
            water += min(Lmax[i] , Rmax[i]) - ht[i];
        }
        return water;
    }
};