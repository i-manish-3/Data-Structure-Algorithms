#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map<int, int> ans, ans1, ans2;
            
            set<int> res;
            vector<int> ret;
            
            for(int i = 0; i < n1; i++)
            {
                ans[A[i]]++;
            }
            
            for(int i = 0; i < n2; i++)
            {
                ans1[B[i]]++;
            }
            
            for(int i = 0; i < n3; i++)
            {
                ans2[C[i]]++;
            }
            
            for(int i = 0; i < n1; i++)
            {
                if(ans[A[i]] > 0 && ans1[A[i]] > 0 && ans2[A[i]] > 0)  
                {
                    res.insert(A[i]);
                }
            }
            for(auto it: res)
            {
                ret.push_back(it);
            }
            return ret;
        }

};
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}