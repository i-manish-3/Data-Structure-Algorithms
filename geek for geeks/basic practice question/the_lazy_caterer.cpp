#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
   	int maximum_Cuts(int n){
   	    // Code here
   	    
   	    // O(n) Brute force
   	    
   	    // int pice = 1;
   	    // for(int i = 1; i <= n; i++)
   	    // {
   	    //     pice += i;
   	    // }
   	    // return pice;
   	    
   	    // O(1) optimized
   	    
   	    return (n*(n + 1) / 2) + 1;
   	}    
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.maximum_Cuts(n);
		cout << ans <<"\n";
	}  
	return 0;
} 