#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
        long long int n, long long int k);

int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}


vector<long long> printFirstNegativeInteger(long long int A[],
        long long int N, long long int K) {
        
        
//      Brute force O(n^2)  

        // vector<long long> ans;
        // long long i, j;
        
        // for(i = 0; i < (N - K + 1); i++)
        // {
        //     for(j = i; j < (K + i); j++)
        //     {
        //         if(A[j] < 0)
        //         {
        //             ans.push_back(A[j]);
        //             break;
        //         }
        //     }
        //     if(j == (K + i))
        //     {
        //         ans.push_back(0);
        //     }
        // }
        // return ans;
        
//      Optimization using sliding window 

    vector<long long> ans;
    queue<long long> q;
    
    long long i = 0, j = 0;
    
    while(j < N)
    {
        if((j - i + 1) < K)   // check all -ve number in 1st window and push it in queue
        {
            if(A[j] < 0)
            {
                q.push(A[j]);
            }
            j++;
        }
        else if((j - i + 1) == K)
        {
            if(A[j] < 0)
            {
                q.push(A[j]);
            }
            if(q.empty())
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(q.front());
                if(q.front() == A[i])       // checking if front of queue is persent in window or not
                {
                    q.pop();
                }
            }
            i++, j++;
        }
    }
    return ans;
}