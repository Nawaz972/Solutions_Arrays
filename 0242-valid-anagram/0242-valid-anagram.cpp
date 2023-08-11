class Solution {
public:
    bool isAnagram(string str1, string str2) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i = 0; i < str1.length(); i++)
        {
            mp1[str1[i]]++;
        }
        for(int i = 0; i < str2.length(); i++)
        {
            mp2[str2[i]]++;
        }
        int cnt = 0;
        int temp = 0;
        int maxi = -1;
        string chk;
        if(str1.length() > str2.length())
        {
            maxi = str1.length();
            chk = str1;
        }
        else
        {
            maxi = str2.length();
            chk = str2;
        }
        for(int i = 0; i < maxi; i++)
        {
            if(mp1[chk[i]] == mp2[chk[i]])
            {
                cnt++;
            }
            temp++;
        }
        if(cnt == temp)
        {
            return true;
        }
        else 
        {
            return false;
        }
        }
};