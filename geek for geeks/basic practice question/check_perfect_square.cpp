#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:

    bool isPerfectSquare(int n)
    {
        int s = 0, e = n; 
        int mid = s + (e - s) / 2;
        
        while(s <= e)
        {
            if(mid * mid == n)
            {
                return true;
            }
            else if(mid * mid < n)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return false;
    }
    int checkPerfectSquare(int N){
        
        if(isPerfectSquare(N))
        {
            return 1;
        }
        return false;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
}