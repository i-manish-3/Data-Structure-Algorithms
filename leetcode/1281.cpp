// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sumOfdigits = 0, productOfdigits = 1;
        
        while(n > 0)
        {
            int lastDigit = n % 10;
            sumOfdigits += lastDigit;
            productOfdigits *= lastDigit;
            n = n / 10;
        }
        return productOfdigits - sumOfdigits;
    }
};