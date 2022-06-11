#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long int oddSum(long long int n)
    {
        long long int sum = 0, j = 1;
        for(int i = 0; i < n; i++)
        {
            sum += j;
            j += 2;
        }
        return sum;
    }
    
  public:
    long long int sumOfTheSeries(long long int n){
        
        long long int res = 0;
        
        while(n--)
        {
            res += oddSum(n+1);
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.sumOfTheSeries(n) << endl;
    }
    return 0;
}