#include<bits/stdc++.h> 
using namespace std;

// 69. Sqrt(x)

class Solution {
    private:
    long long int binarySearch(int x)
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
    
public:
    int mySqrt(int x) {
        return binarySearch(x);
    }
};
