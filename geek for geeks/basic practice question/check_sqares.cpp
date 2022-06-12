#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int checkSquares(int N) {
        
        bool flag = 0;
        for(int i = 0; i <= sqrt(N); i++)
        {
            for(int j = 0; j <= sqrt(N); j++)
            {
                if(((i*i) + (j*j)) == N)
                {
                    flag = 1;
                    break;
                }
                if(flag)
                {
                    break;
                }
            }
        }
        return flag;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.checkSquares(N) << endl;
    }
    return 0;
}  