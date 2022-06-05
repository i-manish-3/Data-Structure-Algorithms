#include<bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int binary_search(vector<int> arr, int target)
    {
        int s = 0, e = arr.size() - 1, mid;

        while(s <= e)
        {
            mid = s + (e - s)/2;
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(arr[mid] > target)
            {
                e = mid - 1;
            }
            else
                s = mid + 1;

        }
        return 0;
    }
};

int main(){
    
    vector<int> arr{10,20,30,40,50,80,90};

    int key = 40;
    Solution obj;
    cout<<obj.binary_search(arr,key);
    
    return 0;
}