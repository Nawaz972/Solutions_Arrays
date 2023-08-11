class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int idx = -1;
        for(int i = n - 1; i >= 0; i--)
        {
            int temp = int(num[i]);
            temp = temp - 48;
            if(temp % 2 != 0)
            {
                idx = i;
                break;
            }
        }
        string ans = "";
        for(int i = 0; i <= idx; i++)
        {
            ans += num[i];
        }
        return ans;
    }
};