#include<bits/stdc++.h> 
using namespace std;

// 852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start = 0, end = arr.size() - 1, mid;
        
        while(start < end)
        {
            mid = start + (end - start)/2;
            
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            {
                return mid;
            }
            else if(arr[mid] <  arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return mid;    
    }
};