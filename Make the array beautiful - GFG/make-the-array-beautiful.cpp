//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> st;
        for(auto x:arr)
        {
            if(st.size())
            {
                if((st.top()>=0 && x<0) || (st.top()<0 && x>=0))
                {
                    st.pop();
                }
                else
                {
                    st.push(x);
                }
            }
            else
            {
                st.push(x);
            }
        }
        vector<int> a;
        while(st.size())
        {
            a.emplace_back(st.top());
            st.pop();
        }
        reverse(a.begin(), a.end());
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends