#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  int fact(int n)
    {
        if(n <= 1)
        {
            return 1;
        }
        return n * fact(n - 1);
    }
    string isKrishnamurthy(int N) {
        
        int n = N, sum = 0;
        while(N != 0)
        {
            int rem = N % 10;
            if(rem == 1 || rem == 0)
            {
                sum += 1;
            }
            else
            {
                sum += fact(rem); 
            }
            
            N = N / 10;
        }
        
        if(n == sum)
        {
            return "YES";
        }
        return "NO";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
} 