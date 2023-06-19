//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int k = 0;
	    for(int i = 1; i <= n; i++)
	    {
	        for(int j = 1; j <= 2 * n - 1; j++)
	        {
	            if((i + j) >= (2 * n - 2 * (n- i)) && (i + j) <= (2 * n))
	            {
	                cout << "*";
	            }
	            else if((i + j) < (2 * n - 2 * (n - i)))
	            {
	                cout << " ";
	            }
	        }
	        k++;
	        cout << endl;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends