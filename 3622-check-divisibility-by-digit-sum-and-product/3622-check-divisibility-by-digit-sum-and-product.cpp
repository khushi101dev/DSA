class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum  = 0;
        int digitProduct = 1 ;
        int num = n ;

        while( num > 0){
            int digit = num % 10 ;
            num /= 10 ;

            digitSum += digit;
            digitProduct *= digit ;
            
            
        
        
        }

        return  n % (digitSum + digitProduct) == 0 ;
         

        
    }
};