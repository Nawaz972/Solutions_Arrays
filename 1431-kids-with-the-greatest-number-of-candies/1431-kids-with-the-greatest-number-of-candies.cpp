class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> cand;
        int maxi=INT_MIN;
        for(auto i=0;i<candies.size();i++)
        {
            maxi=max(maxi,candies[i]);
        }
        for(auto i=0;i<candies.size();i++)
        {
            if(abs(maxi-candies[i])>extraCandies)
            {
                cand.emplace_back(false);
            }
            else
            {
                cand.emplace_back(true);
            }
        }
        return cand;
    }
};