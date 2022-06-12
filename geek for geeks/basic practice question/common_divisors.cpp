#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int commDiv(long long int a,long long int b) {
        
        // O(n) Brute force approach
        
        long long int mini = min(a,b); 
        long long int count = 0;
        for(int i = 1; i <= mini; i++)
        {
            if(a % i == 0 && b % i == 0)
            {
                count ++;
            }
        }
        return count;
    }
        
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        Solution ob;
        cout<<ob.commDiv(a, b)<<endl;
    }
    return 0;
}