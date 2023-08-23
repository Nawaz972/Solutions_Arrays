class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int cnt1 = 0, cnt2 = 0, ele1 = INT_MIN, ele2 = INT_MIN;
        for(int i = 0; i < v.size(); i++)
        {
            if(cnt1 == 0 && v[i] != ele2)
            {
                cnt1 = 1;
                ele1 = v[i];
            }
            else if(cnt2 == 0 && v[i] != ele1)
            {
                cnt2 = 1;
                ele2 = v[i];
            }
            else if(v[i] == ele1)
            {
                cnt1++;
            }
            else if(v[i] == ele2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(ele1 == v[i])	cnt1++;
            if(ele2 == v[i])	cnt2++;
        }
        int temp = (int)(v.size() / 3) + 1;
        if(cnt1 >= temp)
        ans.push_back(ele1);
        if(cnt2 >= temp)
        ans.push_back(ele2);
        //sort(ans.begin(), ans.end());
        return ans;
    }
};