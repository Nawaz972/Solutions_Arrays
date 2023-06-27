//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        string str;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
            {
                cout << s[i];
            }
            else
            {
                cnt++;
            }
        }
        if(cnt == s.length())
        {
            cout << "-1";
            return str;
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.removeSpecialCharacter(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends