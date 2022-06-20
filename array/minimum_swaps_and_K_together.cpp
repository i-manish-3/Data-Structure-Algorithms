#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        
        int count = 0, bad, minswaps, i, j;
        
//      checking size of windo

        for(int i = 0; i < n; i++)
        {
            if(arr[i] <= k)
            {
                count ++;
            }
        }
        
//      finding bad in first window

        bad = 0;
        
        for(int i = 0; i < count; i++)
        {
            if(arr[i] > k)
            {
                bad++;
            }
        }
        
        minswaps = bad;
        
//      check for remaining window

        for(i = 0, j = count; j < n; i++, j++)
        {
//          checking previous element was bad or not

            if(arr[i] > k)
            {
                bad --;
            }
            if(arr[j] > k)
            {
                bad++;
            }
            minswaps = min(bad, minswaps);
        }
        return minswaps;
    }
};

int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}