#include<bits/stdc++.h> 
using namespace std;

class Solution {

    public:
    
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
    
};

int main(){
    
    vector<int> nums{1,2,3,4,4,4,4,5,6};
    int target = 0;

    Solution obj;

    if(obj.firstPos(nums,target) == -1)
    {
        cout<<-1;
    }else
    cout<<obj.lastPos(nums,target) - obj.firstPos(nums,target) + 1;
    return 0;
}