class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int maxi = -1;
        int ele;
        while(k > 0)
        {
            for(auto x : mp)
            {
                if(x.second > maxi)
                {
                    maxi = x.second;
                    ele = x.first;
                }
            }
            ans.emplace_back(ele);
            mp.erase(ele);
            maxi = -1;
            k--;
        }
        return ans;
    }
};