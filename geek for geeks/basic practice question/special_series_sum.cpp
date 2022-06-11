#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long int Sum(long long int n)
    {
        return n * (n + 1) / 2;
    }
  public:
    long long int sumOfTheSeries(long long int n){

        // O(n)
        // long long int sum = 0;
        // while(n--)
        // {
        //     sum += Sum(n + 1);
        // }
        // return sum;
        
        // O(1)
        return (n * (n + 1) * (2 * n + 4)) / 12;
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