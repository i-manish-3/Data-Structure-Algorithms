#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
        }
    }
    return 0;
}