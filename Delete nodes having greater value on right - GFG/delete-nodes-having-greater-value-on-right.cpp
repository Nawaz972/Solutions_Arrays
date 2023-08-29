//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    Node* rev(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* temp = head;
        while(temp != NULL)
        {
            temp = temp -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        Node* reverse = rev(head);
        Node* ans = new Node(reverse -> data);
        Node* ptr = ans;
        Node* temp = reverse;
        int prev = reverse -> data;
        temp = temp -> next;
        while(temp != NULL)
        {
            if(temp -> data >= prev)
            {
                Node* nn = new Node(temp -> data);
                prev = temp -> data;
                ptr -> next = nn;
                ptr = nn;
            }
            temp = temp -> next;
        }
        Node* res = rev(ans);
        return res;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends