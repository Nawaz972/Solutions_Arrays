class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = nums[0], cnt = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == temp)
            {
                cnt++;
            }
            else
            {
                cnt--;
                if(cnt == 0)
                {
                    temp = nums[i];
                    cnt = 1;
                }
            }
        }
        return temp;
    }
};