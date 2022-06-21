#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
//      sum of first window

        long long int sum = 0;
        for(int i = 0; i < K; i++)
        {
            sum += Arr[i];
        }
        
        long long int result = sum;
        
//      checking max sum in remaning window

        for(int i = 0, j = K; j < N; i++, j++)
        {
            sum -= Arr[i];
            sum += Arr[j];
            result = max(result, sum);
        }
        return result;
    }
  
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 