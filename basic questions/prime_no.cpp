#include<bits/stdc++.h> 
using namespace std;

void is_Prime(int n)
{
    int i = 2;

    /*optimization 

        we will check till sqrt(n) because if a factor is greater than the sqrt(n), the other factor that would multiply with it to equal n is necessarily less than the sqrt(n).

    */

    while(i <= sqrt(n))
    {
        if(n % i == 0)
        {
            cout<<"Non Prime";
            break;
        }
        i += 1;
    }
    if(n == 1 | n == 0)
    {
        cout<<"Non Prime";
    }
    if(i == n)
    {
        cout<<"Prime Number";
    }

}

int main(){
    int n = 0;
    is_Prime(n);
    return 0;
}