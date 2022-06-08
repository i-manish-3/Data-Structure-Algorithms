#include<bits/stdc++.h> 
using namespace std;

class Solution {
    private:
    
    int chkPalindrom(int n)
    {
        int orignalN = n;
        int rev = 0;
        while(n > 0)
        {
            int rem = n % 10;
            rev = (rev * 10) + rem;
            n = n / 10;
        }
        if(orignalN == rev)
        {
            return 1;
        }
        else
        return 0;
    }
public:
    int PalinArray(int a[], int n)
    {
        int ans;
    	for(int i = 0; i < n; i++)
    	{
    	    ans = chkPalindrom(a[i]);
    	    if(ans == 0)
    	    {
    	        break;
    	    }
    	}
    	if(ans == 1){
    	    return 1;
    	}
    	else
    	{
    	    return 0;
    	}
    }
};