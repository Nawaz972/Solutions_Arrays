//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int cnt = 0;
        int n = N;
        while(n > 0)
        {
            int rem = n % 10;
            if(rem == 0)
            {
                n = n / 10;
                continue;
            }
            if(N % rem == 0)
            {
                cnt++;
            }
            n = n / 10;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends