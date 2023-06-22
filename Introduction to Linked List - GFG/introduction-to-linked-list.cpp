//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

// class Node {
// public:
//     int data;
//     Node* next;
  
//     // Default constructor
//     Node()
//     {
//         data = 0;
//         next = NULL;
//     }
  
//     // Parameterised Constructor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

void insertAtEnd(Node* &tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> next = NULL;
    tail = temp;
}

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* tail = head;
        int n = arr.size();
        int i = 1;
        while(i < n)
        {
            insertAtEnd(tail, arr[i]);
            i++;
        }
        print(head);
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
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        Node* ans = obj.constructLL(arr);
        while (ans) {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends