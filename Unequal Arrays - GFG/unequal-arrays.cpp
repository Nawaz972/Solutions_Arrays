//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        vector<int> a, b, c, d;
        long long int sum1 = 0, sum2 = 0;
        for(auto i = 0; i < N; i++)
        {
            sum1 += A[i];
            sum2 += B[i];
            if(A[i] % 2 == 0)   a.emplace_back(A[i]);
            else    b.emplace_back(A[i]);
            if(B[i] % 2 == 0)   c.emplace_back(B[i]);
            else    d.emplace_back(B[i]);
        }
        if(sum1 != sum2 || a.size() != c.size() || b.size() != d.size())    return -1;
        long long int temp1 = 0, temp2 = 0;
        for(auto i = 0; i < a.size(); i++)
        {
            temp1 += abs(a[i] - c[i]);
        }
        for(auto i = 0; i< b.size(); i++)
        {
            temp2 += abs(b[i] - d[i]);
        }
        return (temp1+temp2)/4;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends