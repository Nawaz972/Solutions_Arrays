class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0, st = 0;
        bool temp = true;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                cnt++;
            }
            else if(s[i] == ')')
            {
                cnt--;
            }
            if(cnt == 1 && temp == true)
            {
                temp = false;
                continue;
            }
            if(cnt == 0 && temp == false)
            {
                temp = true;
                continue;
            }
            ans += s[i];
        }
        return ans;
    }
};