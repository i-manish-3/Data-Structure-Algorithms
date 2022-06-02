#include<bits/stdc++.h> 

// 442. Find All Duplicates in an Array


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       
        std::unordered_map<int, int> freq;
        std::vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        for(auto it : freq)
        {
            if(it.second == 2)
                ans.push_back(it.first);
        }
        return ans;
    }
};