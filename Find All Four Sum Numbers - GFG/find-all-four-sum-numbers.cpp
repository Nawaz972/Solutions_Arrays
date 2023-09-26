//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        map<vector<int>, int> mp;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0;
        while(i < n - 3)
        {
            int st = i + 1;
            while(st < n - 2)
            {
                int lt = st + 1;
                int rt = n - 1;
                while(lt < rt)
                {
                    if(arr[i] + arr[st] + arr[lt] + arr[rt] == k)
                    {
                        if(mp.find({arr[i], arr[st], arr[lt], arr[rt]}) == mp.end())
                        {
                            ans.push_back({arr[i], arr[st], arr[lt], arr[rt]});
                            mp[{arr[i], arr[st], arr[lt], arr[rt]}] = 1;
                        }
                        lt++;
                        rt--;
                    }
                    else if(arr[i] + arr[st] + arr[lt] + arr[rt] < k)
                    {
                        lt++;
                    }
                    else
                    {
                        rt--;
                    }
                }
                st++;
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends