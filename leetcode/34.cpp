#include<bits/stdc++.h> 
using namespace std;


// 34. Find First and Last Position of Element in Sorted Array

class Solution {

    private:
    
    int firstPos(vector<int>& nums, int target)
    {
        int start = 0, end = nums.size() - 1, ans = - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(nums[mid] == target)
            {
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return ans;
    }

    int lastPos(vector<int>& nums, int target)
    {
        int start = 0, end = nums.size() - 1, ans = - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(nums[mid] == target)
            {
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return ans;
    }
    

    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> result;
        result.push_back(firstPos(nums, target));
        result.push_back(lastPos(nums, target));
        
        return result;
    }
};