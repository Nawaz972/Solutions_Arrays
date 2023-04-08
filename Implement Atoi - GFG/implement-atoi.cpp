//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int sum = 0;
        int a = 0;
        int c = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] >= 48 && str[i]<=57)
            {
                int temp = str[i];
                sum = sum * 10 + temp-48;
            }
            else if(str[0] == 45)
            {
                a = -1;
                c++;
                if(c > 1)
                {
                    return -1;
                }
            }
            else
            {
                return -1;
            }
        }
        if(a < 0)
        {
            return sum * -1;
        }
        else
        {
            return sum;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends