class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int freq[26] = {0};

        for( int i = 0; i < n ; i++){
            char ch = s[i];
            freq[ch - 'a']++; // to get the index

        }

        for( int i =0 ; i < n ; i++){
            char ch = s[i];
            if(freq[ch - 'a'] == 1){
                return i ;
            }

        }
        return - 1;
        
    }
};