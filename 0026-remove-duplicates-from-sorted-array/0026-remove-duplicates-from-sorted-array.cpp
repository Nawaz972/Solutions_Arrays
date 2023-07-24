class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        for(int i = 1; i < nums.size(); i++)    if(nums[i - 1] != nums[i])  cnt++;
        int i = 0, j = i + 1, n = nums.size();
        while(j < n)
        {
            if(nums[i] != nums[j])
            {
                nums[i + 1] = nums[j];
                i++;
            }
            j++;
        }
        return cnt + 1;
    }
};