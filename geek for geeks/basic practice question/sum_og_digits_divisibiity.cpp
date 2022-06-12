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
  
    int isDivisible(int N) {
        // code here
    if(N % sumOfDigits(N) == 0)
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
        cout << ob.isDivisible(N) << "\n";
    }
}  