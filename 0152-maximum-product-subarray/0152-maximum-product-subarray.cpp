class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1, suf = 1, ans = INT_MIN;
        for(int i  = 0; i < nums.size(); i++)
        {
            if(pre == 0)    pre = 1;
            if(suf == 0)    suf = 1;
            pre = pre * nums[i];
            suf = suf * nums[nums.size() - i - 1];
            ans = max(ans, max(pre, suf));
        }
        return ans;
    }
};