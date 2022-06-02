#include <bits/stdc++.h>
using namespace std;
// #include <unordered_map>
int findUnique(int *arr, int size)
{
//     1st method Brute force O(n^2)
    
/*    int count;
    for(int i = 0; i < size; i++)
    {
        count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;   
        }
        if(count == 1)
            return arr[i];
    }
    return 0;
*/
    
//     2st method using map
/*    std::unordered_map<int,int> ans;
    
    for(int i = 0; i < size; i++)
    {
        ans[arr[i]]++;
    }
     for(auto it : ans)
     {
         if(it.second < 2)
             return it.first;
     }
    return 0;
*/
    
//     3rd method using Bitwise XOR operator
    
    int ans = 0;
    for(int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

 int main(){

    int n = 7;
    int arr[n] = {1,2,3,1,2,3,4};
    cout<<"unique number in array = "<<findUnique(arr,n); 
    return 0;
 }