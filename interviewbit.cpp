#include<bits/stdc++.h> 
using namespace std;

int main(){
    vector<int> a = {2};
    vector<int> b = {5,0,3};

    int A = a.size();
    int B = b.size();
    vector<int> c(A*B);

    for(int i = 0; i < A; i++)
    {
        for(int j = 0; j < B; j++)
        {
            c.push_back(a[i] | b[j]);
        }
    }

    int ans = 0;
    for(int i = 0; i < c.size(); i++)
    {
        ans ^= c[i];
    }
    cout<<ans;
    return 0;
}