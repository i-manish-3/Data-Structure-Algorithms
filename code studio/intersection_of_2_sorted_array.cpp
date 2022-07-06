#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;

//     Gives TLE

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr1[i]==arr2[j]){
//                 ans.push_back(arr1[i]);
//                  arr2[j] = -1;
//                 break;
//             }
//         }
//     }
    
    int i =0 , j=0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
    }
    return ans;

}

int main()
{
    int n = 5;
    int m = 6;
    vector<int> arr1(n);
    vector<int> arr2(m);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 2;
    arr1[4] = 3;
    ///////////////////////
    arr2[0] = 1;
    arr2[1] = 1;
    arr2[2] = 2;
    arr2[3] = 3;
    arr2[4] = 4;
    arr2[5] = 5;
    vector<int> ans = findArrayIntersection(arr1,n,arr2,m);
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}