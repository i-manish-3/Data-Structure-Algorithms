#include<bits/stdc++.h> 

// 1207. Unique Number of Occurrences


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        std::unordered_map<int, int> countFreq;
        std::unordered_map<int, int> checkUniq;
        
        for(int i = 0; i < arr.size(); i++)
        {
            countFreq[arr[i]]++;
        }
        
        for(auto it : countFreq)
            checkUniq[it.second]++;
        
        for(auto it : checkUniq)
            if(it.second > 1)
                return false;
        
        return true;
    }
};