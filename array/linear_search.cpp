#include<bits/stdc++.h> 
using namespace std;

int main(){
    

    int arr[8] = {1,8,2,4,5,6,3,10};

    int key = 10;
    int flag = 1;
    for(int i = 0; i < 8; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Key found at index "<<i;
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Key not present";
    }
    return 0;
}