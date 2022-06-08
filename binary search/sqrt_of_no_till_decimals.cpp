#include<bits/stdc++.h> 
using namespace std;

class Solution {
    public:
    long long int squareRootInt(int x)
    {
        int s = 0, e = x;
        long long int mid = s + (e - s) / 2;
        
        long long int ans = - 1; 
        while(s <= e)
        {
            long long int square = mid * mid;
            if(square == x)
            {
                return mid;
            }
            if(square < x)
            {
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
            mid = s + (e - s) / 2;
        }
        return ans;
    }

    double addDecimal(int n, int decimalPlace, int square)
    {
        double factor = 1;
        double ans = square;
        for(int i = 0; i < decimalPlace; i++)
        {
            factor = factor / 10;
            for(double j = ans; j*j < n; j = j + factor)
            {
                ans = j;
            }
        }
        return ans;
    }
    
};

int main(){

    int n = 37;
    Solution obj;
    long long int square = obj.squareRootInt(n);
    cout<<obj.addDecimal(n,5,square);
    return 0;
}
