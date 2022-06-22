#include<bits/stdc++.h> 
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
        

//      Brute force approach O(n^2)
       /* 
        double sum, avg = -1111;
        int n = nums.size();
        
        for(int i = 0; i < (n - k + 1); i++)
        {
            sum = 0;
            for(int j = i; j < (k + i); j++)
            {
                sum += nums[j];
            }
            if(sum > avg)
                avg = sum;
        }
        return avg/k;
        */
        
//      Using Sliding window O(n)

    double sum = 0, avg = INT_MIN;
    int i = 0, j = 0, n = nums.size();
    
    while(j < n)
    {
        if((j - i + 1) < k)
        {
            sum += nums[j];
            j++;
        }
        if((j - i + 1) == k)
        {
            sum += nums[j];
            if(sum > avg)
            {
                avg = sum;
            }
            sum = sum - nums[i];
             i++, j++;
        }
    }
    return avg/k;
}    


int main(){
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    cout<<findMaxAverage(nums,k);
    return 0;
}