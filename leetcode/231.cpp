// 231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
          
        
        // 1st method
        
        // if(n == 0)
        // {
        //     return false;
        // }
        // while(n != 1)
        // {
        //     if(n % 2 != 0)
        //     {
        //         return false;
        //     }
        //     n = n / 2;
        // }
        // return true;
        
        // 2nd method (Bit Manupulation)
        
        // if(n == 0 )
        // {
        //     return false;
        // }
        // if((n & (n - 1)) == 0)
        //     return true;
        // else
        //     return false;
        
        // 3rd method  (Log base 2 of n is integer then it is power of 2)
        
        if(n <= 0)
        {
            return false;
        }
        if(log2(n) == int(log2(n)))
            return true;
        else
            return false;
    }
};