class Solution {
public:
    
    vector<int> answer(int n)
    {
        vector<int> ans;
        long long int res = 1;
        int a = n;
        for(int i = 2; i <= a; i++)
        {
            ans.push_back(res);
            res = res * (n - 1);
            res = res / (i - 1);
            n--;
        }
        ans.push_back(1);
        return ans;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++)
        {
            ans.push_back(answer(i));
        }
        return ans;
    }
};