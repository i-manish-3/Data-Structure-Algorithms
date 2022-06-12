#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int mthHalf(int N, int M){
        // code here
        
        int res = 0;
        int m = M - 1;
        while(m--)
        {
            
            N /= 2;
        }
        return N;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.mthHalf(N, M)<<"\n";
    }
    return 0;
}  