#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[9] = {12, 11, -13, -5, 6, 7, 5, -3, -6};
    
    int start = 0, end = 9 - 1; 
    while(start <= end)
    {
        if(arr[start] < 0)
        {
            start ++;
        }
        else if(arr[end] > 0)
        {
            end --;
        }
        else
        {
            swap(arr[start++], arr[end--]);
        }
    }
    
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}