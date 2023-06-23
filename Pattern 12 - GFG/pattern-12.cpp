//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int q = 2* n;
        for(int i = 1; i <= n; i++)
        {
            int k = 1;
            for(int j = 1; j <= i; j++)
            {
                cout << k << " ";
                k++;
            }
            for(int j = 2; j <= n; j++)
            {
                if((j - i) >= 1)
                {
                    cout << " " << " ";
                }
            }
            for(int j = n + 1; j <= 2 * n; j++)
            {
                if((i + j) <= 2 * n)
                {
                    cout << " " << " ";
                }
            }
            int p = i;
            for(int j = 2 * n; (i + j) >= 2 * n + 1; j--)
            {
                cout << p << " ";
                p--;
            }
            q--;
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