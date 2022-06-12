#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int divSum(long long int n){
        
        // O(n) Brute force 
    //     long long int sum = 0;
    //     for(int i = 1; i < n/2; i++)
    //     {
    //         if(n % i == 0)
    //         {
    //             sum += i;
    //         }
    //     }
    //     return sum;
    
        // O(sqrt(n)) Optimized
            
        long long int sum = 0;
        if(n == 1)
        {
            return sum;
        }
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                if(i == (n/i))
                {
                    sum += i;
                }
                else
                {
                    sum += (i + (n/i));
                }
            }
        }
        return sum + 1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.divSum(n)<<endl;
    }
    return 0;
}