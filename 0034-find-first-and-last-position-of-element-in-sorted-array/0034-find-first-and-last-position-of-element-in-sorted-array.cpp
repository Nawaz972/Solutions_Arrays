class Solution {
public:
    
    int lowerBound(vector<int> nums, int target)
    {
        int low = 0, high = nums.size() - 1, ans = -1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] >= target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
    
    int upperBound(vector<int> nums, int target)
    {
        int low = 0, high = nums.size() - 1, ans = -1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int a = lowerBound(nums, target);
        if(a == -1 || nums[a] != target)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(a);
        int b = upperBound(nums, target);
        ans.push_back(b);
        return ans;
    }
};