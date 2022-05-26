#include<bits/stdc++.h> 
using namespace std;

int main(){
    int row = 7,col = 3;

    while(col--)
    {
        // for(int i = 0; i < row; i++)
        // {
        //     cout<<"* ";
        // }
        int i = 1;
        while(i <= row)
        {
            cout<<"* ";
            i++;
        }
        cout<<endl;
    }

    return 0;
}