//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        //int k = 1;
        for(int i = 1; i <= 2 * n - 1; i++)
        {
            if(i <= n)
            {
                for(int j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
            }
            else
            {
                for(int j = 1; j <= 2 * n - i; j++)
                {
                    cout << "* ";
                }
            }
            ///k++;
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