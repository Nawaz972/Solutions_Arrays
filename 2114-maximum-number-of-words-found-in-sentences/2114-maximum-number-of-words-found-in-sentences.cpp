class Solution {
public:
    int mostWordsFound(vector<string>& sent) {
        int maxi = INT_MIN;
        for(auto i = 0; i < sent.size(); i++)
        {
            string str = sent[i];
            int n = str.size(), cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(str[j] == ' ' && str[j+1] != ' ')
                {
                    cnt++;
                }
            }
            if(cnt > maxi)
            {
                maxi = cnt;
            }
            //cnt = 0;
        }
        return maxi+1;
    }
};