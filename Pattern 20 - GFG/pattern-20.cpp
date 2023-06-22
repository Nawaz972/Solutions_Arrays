//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for(int j = i + 1; j <= n; j++)
            {
                cout << " ";
            }
            for(int j = n + 1; j <= 2 * n; j++)
            {
                if((i + j) >= 2 * n + 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for(int i = 1; i <= n - 1; i++)
        {
            for(int j = n - 1; j >= i; j--)
            {
                cout << "*";
            }
            for(int j = 1; j <= n; j++)
            {
                if((i + j) >= (n + 1))
                {
                    cout << " ";
                }
            }
            for(int j = (n + 1); j <= 2 * n; j++)
            {
                if((j - i) >= 2 && (j - i) <= n)
                {
                    cout << " ";
                }
            }
            for(int j = n + 2; j <= 2 * n; j++)
            {
                if((n - i) + j >= 2 * n + 1)
                {
                    cout << "*";
                }
            }
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