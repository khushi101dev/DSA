class Solution {
public:
    int trap(vector<int>& ht) {
  // Two pointer approach here time and space complexity is O(n)
  int n  = ht.size();
  int ans = 0;
  int l = 0 ;
  int r = n-1;
  int Lmax = 0;
  int Rmax = 0;

  while( l < r){
    Lmax = max(Lmax , ht[l]);
    Rmax = max(Rmax , ht[r]);

    if(Lmax < Rmax){
        ans += Lmax - ht[l];
        l++;
    }else{
        ans += Rmax - ht[r];
        r--;
    }
  }

return ans;
        
    }
};