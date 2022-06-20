#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        
        // O(n^2)  Brute force [got tle]
        // int count = 0;
        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = i + 1; j < n; j++)
        //     {
        //         if(arr[i] + arr[j] == k)
        //         {
        //             count ++;
        //         }
        //     }
        // }
        // return count;
        

        // Using sorting O(nlogn) works when elements are unique
        
        // sort(arr, arr+n);
        // int count = 0;
        // int s = 0, e = n - 1;
        // while(s <= e)
        // {
        //     if(arr[s] + arr[e] == k)
        //     {
        //         count++;
        //         s++;
        //     }
        //     else if(arr[s] + arr[e] > k)
        //     {
        //         e--;
        //     }
        //     else if(arr[s] + arr[e] < k)
        //     {
        //         s++;
        //     }
        // }
        // return count;
        
        // Using map  O(n)   
        
        unordered_map<int, int> ans;
        
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            int diff = k - arr[i];
            if(ans.count(diff))
            {
                count += ans[diff];
            }
            ans[arr[i]]++;
        }
        return count;  
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
} 