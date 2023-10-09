class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = nums[0];
        int cnt = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == temp) cnt++;
            else    cnt--;
            if(cnt == 0)
            {
                temp = nums[i];
                cnt = 1;
            }
        }
        cnt = 0;
        for(int i = 0; i < nums.size(); i++)    if(temp == nums[i]) cnt++;
        if(cnt > nums.size() / 2)   return temp;
        return -1;
    }
};