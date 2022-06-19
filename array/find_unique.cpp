#include<bits/stdc++.h> 
using namespace std;
// 2nd method using sort
// 3rd method using xor 


int main(){
    int n = 9,i,j;
    int arr[n] = {1,2,3,2,1,9,9,3,0};
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                if(arr[i] == arr[j])
                {
                    break;
                }
            }
        }
        if(j == n)
        {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}