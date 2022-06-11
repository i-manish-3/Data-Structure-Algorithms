#include <bits/stdc++.h>
using namespace std;

class Solution {
    int factorial(int n)
    {
        if(n == 0 || n == 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }
  public:
    int isStrong(int N) {
        
        int orignal = N, sum = 0;
        while(N != 0)
        {
            sum += factorial(N % 10);
            N /= 10;
        }
        if(orignal == sum)
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
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}