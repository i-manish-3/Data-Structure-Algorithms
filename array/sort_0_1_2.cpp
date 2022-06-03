#include<bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n)
{
   int low = 0 , mid = 0 , high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++,mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 7;
    int arr[n] = {2, 2, 2, 1, 1, 1, 0};
    sort012(arr, n);
    return 0;
}