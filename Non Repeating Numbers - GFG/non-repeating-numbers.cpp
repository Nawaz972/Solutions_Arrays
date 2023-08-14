//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> arr) 
    {
       int n = arr.size();
        int all = 0;
        for (int i = 0; i < n; i++)
            all = all ^ arr[i];

        // Find the rightmost set bit
        int m = all & -all;

        // Separate the numbers into two groups
        int g1 = 0, g2 = 0;
        for (int i = 0; i < n; i++) {
            if ((m & arr[i]) == 0) {
                g1 ^= arr[i];
            } else {
                g2 ^= arr[i];
            }
        }

        std::vector<int> ans;
        if (g1 > g2) {
            ans.push_back(g2);
            ans.push_back(g1);
        } else {
            ans.push_back(g1);
            ans.push_back(g2);
        }

        return ans;
    }

};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends