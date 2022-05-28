#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    int arr[8] = {1,4,6,-456,-9,2,687,4};
    int s = 0, e = 8 - 1;

    while(s <= e)
    {
        swap(arr[s], arr[e]);
        s++, e--;
    }

    for(int i = 0 ; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}