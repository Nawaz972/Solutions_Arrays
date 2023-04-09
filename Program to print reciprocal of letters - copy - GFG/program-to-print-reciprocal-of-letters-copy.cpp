//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string s)
    {
        // Write Your code here
        string str = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(isupper(s[i]))
            {
                str += 'Z' - (s[i] - 'A');
            }
            else if(islower(s[i]))
            {
                str += 'z' - (s[i] - 'a');
            }
            else
            {
                str += s[i];
            }
        }
        return str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends