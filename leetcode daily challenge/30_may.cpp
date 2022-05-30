
// 29. Divide Two Integers


class Solution {
            long long int longDivide(long long int lDividend, long long int ldivisor)
        {
            if(lDividend < ldivisor)
            {
                return 0;
            }
            long long int count = 1;
            long long int sum = ldivisor;
            
            while(2*sum <= lDividend)
            {
                sum = 2*sum;
                count = 2*count;
            }
            return count + longDivide(lDividend - sum, ldivisor);
        }
public:
    int divide(int dividend, int divisor) {
    
        long long int count = 0;
        bool neg = false;
        
        if((dividend <= 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        {
            neg = true;
        }
        long long int lDividend = abs(dividend);
        long long int lDivisor = abs(divisor);
        
        if(lDivisor == 0 || (lDividend < lDivisor))
        {
            return 0;
        }
        count = longDivide(lDividend, lDivisor);
        
        if(count > INT_MAX)
        {
            if(neg)
            {
                return INT_MIN;
            }
            else
            {
                return INT_MAX;
            }
        }
        else
        {
            if(neg)
            {
                return (int)(-count);
            }
            else{
                return (int)count;
            }
        }
        
    }
};