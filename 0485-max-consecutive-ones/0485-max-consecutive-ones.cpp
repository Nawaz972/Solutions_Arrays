class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                cnt++;
                if(cnt > maxi)
                {
                    maxi = cnt;
                }
            }
            else
            {
                if(cnt > maxi)
                {
                    maxi = cnt;
                }
                cnt = 0;
            }
        }
        return maxi;
    }
};