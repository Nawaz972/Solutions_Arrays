//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i = 1; i <= 2 * n - 1; i++)
        {
            for(int j = 1; j <= 2 * n - 1; j++)
            {
                int a = i, b = j, c = 2 * n - i, d = 2 * n - j;
                int mini = min(a, min(b, min(c, d)));
                cout << n + 1 - mini << " ";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends