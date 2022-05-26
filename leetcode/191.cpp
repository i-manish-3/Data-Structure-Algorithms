// 191. Number of 1 Bits
#include<bits/stdc++.h> 

class Solution {

public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;
        while(n != 0)
        {
            if(n & 1)  // n & 1 == 1
            {
                count ++;
            }
            n = n >> 1;
        }
        return count;
    }
};