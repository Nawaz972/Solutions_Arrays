//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string str = s;
        int j = 0;
        int i = 0;
        while(i < s.length())
        {
            if(s[i] != ' ')
            {
                str[j] = s[i];
                j++;
            }
            i++;
        }
         for(int i = j; i < s.length(); i++)
         {
             str[i] = ' ';
         }
        return str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends