class Solution {
public:
    int maximumLengthSubstring(string s) {
     int  low = 0 , high = 0;
     int n = s.size();

     int freq[26] = {0};

     int res = 0;

     while(high < n){
        freq[s[high] -'a']++;


        while( freq[s[high] - 'a'] > 2){

            freq[s[low] - 'a']--;
            low++;
        }
        int len = high - low +1;
        res = max(res , len);

        high++;
     }
    return res;
        
    }
};