#include<bits/stdc++.h> 
using namespace std;

class Solution
{
    public:
    int search(vector<int> nums, int target)
    {
        int start = 0, end = nums.size() - 1, mid;

        while(start <= end)
        {
            mid = start + (end - start) / 2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid] > nums[end])
            {
                if(target < nums[mid] and target >= nums[start])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if(target > nums[mid] and target <= nums[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return - 1;
    }
};



int main(){

    vector<int> nums{4,5,6,7,0,1,2};
    int target = 0;
    Solution obj;

    cout<<obj.search(nums, target);

    return 0;
}