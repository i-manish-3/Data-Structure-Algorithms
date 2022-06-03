#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == s)
            {
                maxi = max(arr[i],arr[j]);
                mini = min(arr[i],arr[j]);
                ans.push_back({mini,maxi});
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    
    vector<int> arr;
    arr[0] = 2;
    arr[1] = -3;
    arr[2] = 3;
    arr[3] = 3;
    arr[4] = -2;
    int s = 0;
    vector<vector<int>> ans = pairSum(arr,s);
    for(int i = 0; i  <ans.size(); i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<ans[i][j]<<endl;
        }
    }
    return 0;
}