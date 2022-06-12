#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int totalDigits(long long int n){

        // O(n)  TLE
        // long long int sum = 0;
        // for(int i = n; i >= 1; i--)
        // {
        //     string s = to_string(i);
        //     sum += s.length();
        // }
        // return sum;
        
        // O(logN) Optimized
        
        long long int sum = 0;
        for(int i = 1; i <= n; i *= 10)
        {
            sum += (n - i + 1);
        }
        return sum;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.totalDigits(n) << endl;
    }
    return 0;
}