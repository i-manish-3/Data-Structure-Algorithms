#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    int arr[8] = {1,4,6,-456,-9,2,687,4};

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i = 0; i < 8; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    cout<<"Max = "<<maxi<<"\nMin = "<<mini;
    return 0;
}