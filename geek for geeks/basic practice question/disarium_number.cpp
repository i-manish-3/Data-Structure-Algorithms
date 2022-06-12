#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isDisarium(int N) {
        
        int orignal = N;
        string s = to_string(N);
        int len = s.length();
        int sum = 0;
        for(int i = len; i >= 1; i--)
        {
            sum += pow(N%10,i);
            N = N/10;
        }
        return orignal == sum;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isDisarium(N) << endl;
    }
    return 0;
} 