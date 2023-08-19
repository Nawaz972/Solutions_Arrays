class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = 0, n= s.length();
        while(i < n)
        {
            while(i < n && s[i] == ' ')
            {
                i++;
            }
            string str = "";
            while(s[i] != ' ' && i < n)
            {
                str += s[i];
                i++;
            }
            if(str.size() > 0){
            if(ans == "")    ans += str;
            else    ans = str + " " + ans;
            }
        }
        return ans;
    }
};