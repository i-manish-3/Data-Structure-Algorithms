#include<bits/stdc++.h> 
using namespace std;

int main(){

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // int n = 5;

    // int i = 0;
    // while(i < n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // 1  1  1
    // 2  2  2
    // 3  3  3

    // int n = 3;

    // int i = 1;
    // while(i <= n)
    // {
    //     int j = 0;
    //     while(j < n)
    //     {
    //         cout<<i<<"  ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // int n = 4;

    // int i = 1;
    // while(i <= n)
    // {
    //     int j = 1;
    //     while(j <= n)
    //     {
    //         cout<<j<<"  ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // n = 3
    // 1  2  3
    // 4  5  6
    // 7  8  9

    // int n = 3;
    // int i = 1;
    // int show = 1;
    // while(i <= n)
    // {
    //     int j = 1;
    //     while(j <= n)
    //     {
    //         cout<<show<<"  ";
    //         show ++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // A A A A
    // B B B B 
    // C C C C 
    // D D D D 

    // int n = 4;
    // int i = 1;
    // char p = 'A';
    // while(i <= n)
    // {
    //     int j = 1;
    //     while(j <= n)
    //     {
    //         cout<<p<<" ";
    //         j++;
    //     }
    //     p++;
    //     cout<<endl;
    //     i++;
    // }

    // A B C D
    // A B C D 
    // A B C D 
    // A B C D  

    int n = 4;
    int i = 1;
    while(i <= n)
    {
        char ch = 'A';
        int j = 1;
        while(j <= n)
        {
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }




    return 0;
}