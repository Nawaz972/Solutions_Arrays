class Solution {
public:

    int check(vector<int> &nums, int target, int low, int high)
    {
        if(low > high)  return -1;
        int mid = (low + high) / 2;
        if(nums[mid] == target)     return mid;
        else if(nums[mid] > target)     return check(nums, target, low, mid - 1);
        return check(nums, target, mid + 1, high);
    }

    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = check(nums, target, low, high);
        return ans;
    }
};