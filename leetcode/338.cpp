
// 338. Counting Bits


// Brute force approach

class Solution {
    
    private:
        
    int countSetbit(int n)
    {
        int count = 0;
        while(n != 0)
        {
            if(n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
    
    public:
    vector<int> countBits(int n) {
        
        vector<int> ans;
        
        for(int i = 0; i <= n; i++)
        {
            int res = countSetbit(i);
            ans.push_back(res);
        }
        
        return ans;
    }
};