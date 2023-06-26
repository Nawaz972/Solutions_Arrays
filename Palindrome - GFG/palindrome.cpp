//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int m = n;
		    int sum = 0;
		    while(m > 0)
		    {
		        int r = m % 10;
		        sum = sum * 10 + r;
		        m = m / 10;
		    }
		    //cout << m;
		    if(sum == n)
		    {
		        return "Yes";
		    }
		    else
		    {
		        return "No";
		    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends