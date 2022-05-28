// 1780. Check if Number is a Sum of Powers of Three

class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        if(n == 1)
        {
            return true;
        }
        
        while(n != 1)
        {
            if(n % 3 == 2)
                return false;
            
            n /= 3;
        }
        return true;
    }
};