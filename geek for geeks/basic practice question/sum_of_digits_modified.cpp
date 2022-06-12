#include <bits/stdc++.h>
using namespace std;

class Solution {

    int sumOfDigits(int n)
    {
        int sum = 0;
        while(n != 0)
        {
            int rem = n % 10;
            sum += rem;
            n /= 10;
        }
        return sum;
    }
    
  public:
    int isMagic(int N) {
        // code here
        
        // while(N >= 10)
        // {
        //     N = sumOfDigits(N);
        // }
        // if(N == 1)
        // {
        //     return 1;
        // }
        // return 0;
        
        // Other method
        
        if(N % 9 == 1)
        {
            return 1;
        }
        return 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isMagic(N) << "\n";
    }
}  