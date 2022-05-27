#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    // int n = 8;
    // int ans = 0;
    // int i = 1;
    // while(n != 0)
    // {
    //     int digit = n % 2;
    //     ans += digit*i;
    //     n = n / 2;
    //     i *= 10;
    // }

    // cout<<ans;


    // using bit magic 

    int n = 15;
    int ans = 0, i = 0;
    while(n != 0)
    {
        int bit = n & 1;
        ans += (bit * pow(10,i));
        i++;
        n = n >> 1;
    }
    cout<<ans;
    
    return 0;
}