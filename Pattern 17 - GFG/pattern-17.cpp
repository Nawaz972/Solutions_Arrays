//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        // if(n == 1)
        // {
        //     cout << char(65);
        // }
        //n = n + 1;
        for(int i = 1; i <= n; i++)
        {
            int k = 0;
            for(int j = 1; j <= 2 * n - 1; j++)
            {
                if((i + j) >= (n + 1) && j <= n)
                {
                    cout << char(65 + k);
                    k++;
                }
                else if(j > n && (i + j) <= (n + 1) + 2 * (i - 1))
                {
                    cout << char(64 + n - (j - i));
                    //k--;
                }
                else if((i + j) < (n + 1))
                {
                    cout << " ";
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