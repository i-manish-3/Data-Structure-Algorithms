
// 2119. A Number After a Double Reversal

class Solution {
    
    private:
        long long int reverseNum(int num)
        {
            long long int ans = 0;
            while(num != 0)
            {
                int rem = num % 10;
                ans = (ans * 10) + rem;
                num /= 10;
            }
            return ans;
        }
    
public:
    bool isSameAfterReversals(int num) {
        
        int reverse = reverseNum(num);
        int reverse1 = reverseNum(reverse);
        
        if(num == reverse1)
            return true;
        else
            return false;
    }
};