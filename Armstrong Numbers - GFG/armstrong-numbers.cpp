//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int m = n;
        int sum = 0;
        while(m > 0)
        {
            int r = m % 10;
            sum = sum + r * r * r;
            m = m / 10;
        }
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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends