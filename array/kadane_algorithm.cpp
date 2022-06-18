
// Largest sum contiguous aubarray

#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    int n = 12;
    int arr[n] = {-2, -3, 4, -1, -2, 1, 5, -30, 6, 7, 8, -33};
    int ans = INT_MIN;
    int sum = 0;
    int start = 0, end = 0, s = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(ans < sum)
        {
            ans = sum;
            start = s;
            end = i;
        }
        if(sum < 0)
        {
            sum = 0;
            s = i + 1;
        }
    }
    cout<<ans<<endl;
    for(int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}