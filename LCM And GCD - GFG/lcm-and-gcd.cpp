//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long a = A, b = B;
        long long maxi;
        vector<long long> arr;
        while(a> 0 && b > 0)
        {
            if(a > b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }
        }
        if(a == 0)
        {
            maxi = b;
        }
        else
        {
            maxi = a;
        }
        if(max(A, B) % min(A,B) == 0)
        {
            arr.emplace_back(max(A, B));
        }
        else
        {
            arr.emplace_back((A * B) / maxi);
        }
        arr.emplace_back(maxi);
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends