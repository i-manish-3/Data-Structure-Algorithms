
// 318. Maximum Product of Word Lengths


class Solution {

private:

    int chk(string s1, string s2)
    {
        int n1 = s1.length();
        int n2 = s2.length();
        
        vector<bool> ans(26, false);
        
        for(int i = 0; i < n1; i++)
        {
            ans[s1[i] - 'a'] = true;
        }
        
        for(int i = 0; i < n2; i++)
        {
            if(ans[s2[i] - 'a'] == true)
                return 0;
        }
        return n1 * n2;
    }
    
        
public:
    int maxProduct(vector<string>& words) {
        
        int n = words.size();
        
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                res = max(res, chk(words[i], words[j]));
            }
        }
        return res; 
    }
};