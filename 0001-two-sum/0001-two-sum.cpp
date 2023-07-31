class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            if(mp.find(temp) != mp.end())
            {
                ans.emplace_back(i);
                ans.emplace_back(mp[temp]);
                return ans;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};