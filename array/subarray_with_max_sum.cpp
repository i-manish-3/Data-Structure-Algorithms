#include<bits/stdc++.h> 
using namespace std;

int main(){
    

    int n = 8;
    int arr[n] = {-2, -3, 4, -1, -2, 1, -5, -3};

    int res = -1111111,sum;
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            res = max(res, sum);
        }
    }
    cout<<res;
    return 0;
}