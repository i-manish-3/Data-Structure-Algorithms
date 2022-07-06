#include<bits/stdc++.h> 
using namespace std;

void sort01(int arr[], int n)
{
    int start = 0, end = n - 1;
    while(start <= end)
    {
        if(arr[start] == 0)
        {
            start ++;
        }
        else if(arr[end] == 1)
        {
            end --;
        }else{
            swap(arr[start],arr[end]);
            start++,end--;

        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8] = {0,1,1,1,1,0,0,0};
    sort01(arr,8);
    return 0;
}