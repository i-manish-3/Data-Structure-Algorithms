#include<bits/stdc++.h> 
using namespace std;

int main(){

    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int temp = arr[n-1], i;
    
    for(i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
        cout<<arr[i]<<endl;
    }
    arr[0] = temp;

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}