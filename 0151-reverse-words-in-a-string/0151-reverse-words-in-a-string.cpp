class Solution {
public:
    string reverseWords(string str) {
        string ans = "";
        int n = str.length();
        int i = 0;
        while(i < n)
        {
            while(str[i] == ' ' && i < n)  i++;
            string temp = "";
            while(str[i] != ' ' && i < n)
            {
                temp += str[i];
                i++;
            }
            if(ans == "")   ans = temp;
            else if(i < n)   ans = temp + " " + ans;
            else if (temp != "" && i >= n) {
                ans = temp + " " + ans;
                return ans;
            }
            i++;
        }
        return ans;
    }
};