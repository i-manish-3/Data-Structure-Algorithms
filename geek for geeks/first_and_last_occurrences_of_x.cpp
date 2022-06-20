#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
    // O(n)
/*    
    int count = 0, lastOcc = -1;
    bool chk = false;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            lastOcc = i;
            count ++;
            chk = true;
        }
    }
    if(chk)
    {
        return {lastOcc - count + 1, lastOcc};
    }else
    {
        return {-1,-1};
    }
*/
    
    // O(logN)
 int firstOcc(int arr[], int n, int x);
 int lastOcc(int arr[], int n, int x);
 
 
    vector<int> ans;
    ans.push_back(firstOcc(arr, n, x));
    ans.push_back(lastOcc(arr, n, x));

    return ans;

}

int firstOcc(int arr[], int n, int x)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = - 1;
    
    while(start <= end)
    {
        if(arr[mid] == x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > x)
        {
            end --;
        }
        else
        {
            start ++;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}


int lastOcc(int arr[], int n, int x)
{

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = - 1;
    
    while(start <= end)
    {
        if(arr[mid] == x)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > x)
        {
            end --;
        }
        else
        {
            start ++;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
