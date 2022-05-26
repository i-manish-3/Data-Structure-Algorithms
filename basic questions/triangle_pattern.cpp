#include<bits/stdc++.h> 
using namespace std;

int main(){

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *


    // int n = 5;

    // int i = 1;
    // while(i <= n)
    // {
    //     int j = 1;
    //     while( j <= i)
    //     {
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    // int n = 5;

    // int i = 1;
    // while(i <= n)
    // {
    //     int count = i;
    //     int j = 1;
    //     while( j <= i)
    //     {
    //         cout<<count--<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // A 
    // B B 
    // C C C 
    // D D D D 

    // int n = 4;
    // int i = 1;
    // char ch = 'A';
    // while(i <= n)
    // {
    //     int j = 1;
    //     while(j <= i)
    //     {
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++,ch++;
    // }

    // A 
    // B C 
    // D E F 
    // G H I J 

    // int n = 4;
    // int i = 1;
    // char ch = 'A';
    // while(i <= n)
    // {
    //     int  j = 1;
    //     while(j <= i)
    //     {
    //         cout<<ch++<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // D 
    // C D 
    // B C D 
    // A B C D 

    int n = 6;
    int i = 1;
    char ch = 65 + n - 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        ch-=i+1;
        i++;
    }

    return 0;
}