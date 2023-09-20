class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>  mp;
        for(int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto x : mp)
        {
            pq.push({x.second, x.first});
        }
        string ans = "";
        while(!pq.empty())
        {
            int temp1 = pq.top().first;
            char temp2 = pq.top().second;
            pq.pop();
            for(int i = 0; i < temp1; i++)  ans += temp2;
        }
        return ans;
    }
};