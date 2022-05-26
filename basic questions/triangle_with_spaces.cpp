#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    // int n = 5;

    // int i = 1;
    // while(i <= n)
    // {

    //     // space printing
    //     int j = 1;
    //     while(j <= n-i)
    //     {
    //         cout<<"  ";
    //         j++;
    //     }

    //     // star printing
    //     int k = 1;
    //     while(k <= i)
    //     {
    //         cout<<"* ";
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // * * * * *
    // * * * *
    // * * *
    // * *
    // * 

    int n = 5;
    while(n--)
    {
        int i = n;
        while(i--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}