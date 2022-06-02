#include<bits/stdc++.h> 
using namespace std;



int findDuplicate(vector<int> &arr) 
{
//     Gives TLE
    
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//                 break;
//             }
//         }
//     }
//     return 0;
    
//     using XOR
    
    int ans =0;
    for(int i=0;i<arr.size();i++){
        ans ^= arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans^=i;
    }
    return ans;
}
int main(){
    
    vector<int> arr(5);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 4;

    cout<<findDuplicate(arr);
    return 0;
}
