#include<bits/stdc++.h> 
using namespace std;

int binary_in_rverse_sorted(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] > target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return - 1;
}

int main()
{
    vector <int> nums = {6,5,4,3,2,1,0};
    int target = 9;

    cout<<binary_in_rverse_sorted(nums, target);

    return 0;
}