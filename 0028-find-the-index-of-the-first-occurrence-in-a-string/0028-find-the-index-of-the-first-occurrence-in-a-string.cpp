class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int i = 0;
        int j = 0;
        while(i < n)
        {
            int cnt = 0;
            int k = i;
            j = 0;
            while(k < n && j < m)
            {
                if(haystack[k] == needle[j])
                {
                    cnt++;
                }
                k++;
                j++;
            }
            if(cnt == m)    return i;
            i++;
        }
        return -1;
    }
};