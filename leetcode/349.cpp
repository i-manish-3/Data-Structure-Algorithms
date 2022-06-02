#include <bits/stdc++.h>
// 349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        std::unordered_set<int> res(nums1.begin(), nums1.end());
        std::vector<int> ans;
        
        for(auto it : nums2)
        {
            if(res.count(it))
            {
                ans.push_back(it);
                res.erase(it);
            }
        }
        return ans;
    }
};
