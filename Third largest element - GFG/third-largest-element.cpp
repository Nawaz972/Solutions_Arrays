//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int maxi1=INT_MIN, maxi2=INT_MIN, maxi3=INT_MIN;
         if(n<3) return -1;
         else
         {
             for(int i=0;i<n;i++)
             {
                 maxi1=max(maxi1,a[i]);
             }
             for(int i=0;i<n;i++)
             {
                 if(a[i]!=maxi1)
                 {
                     maxi2=max(maxi2,a[i]);
                 }
             }
             for(int i=0;i<n;i++)
             {
                 if(a[i]!=maxi1 && a[i]!=maxi2)
                 {
                     maxi3=max(maxi3,a[i]);
                 }
             }
         }
         return maxi3;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends