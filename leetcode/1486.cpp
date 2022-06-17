// 1486. XOR Operation in an Array

class Solution {
public:
    int xorOperation(int n, int start) {
        
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int arrElement = (start + (2 * i));
            ans ^= arrElement;
        }
        return ans;
    }
};
