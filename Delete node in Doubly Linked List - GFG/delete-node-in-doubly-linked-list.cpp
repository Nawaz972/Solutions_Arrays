//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};


// } Driver Code Ends
/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      Node* temp = head_ref;
      Node* back;
      //Node* del = head_ref;
      if(x == 1)
      {
          temp = temp -> next;
          temp -> prev = NULL;
          head_ref = temp;
          return head_ref;
      }
      int cnt = 1;
      while(cnt < x)
      {
          back = temp;
          temp = temp -> next;
          cnt++;
        //   if(cnt == x)
        //   {
        //       break;
        //   }
      }
       if(temp -> next == NULL)
       {
           temp -> prev = NULL;
           back -> next = NULL;
           return head_ref;
       }
       back -> next = temp -> next;
       temp -> next -> prev = back;
       temp -> next = NULL;
      return head_ref;
    }
};

//{ Driver Code Starts.

/* Function to print Nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *node)
{
  while(node!=NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
   printf("\n");
}
 
/* Drier program to test above functions*/
int main()
{
  int t, x, n, i;
  scanf("%d",&t);
  
  while(t--)
  {
      /* Start with the empty list */
      struct Node *temp,*head = NULL;
      scanf("%d",&n);
      
      temp = NULL;
      
      for(i=0;i<n;i++){
        scanf("%d",&x);
        
        if(head == NULL){
            head = new Node(x);
            temp = head;
        }
        else{
            Node *temp1 = new Node(x);
            temp->next = temp1;
            temp1->prev = temp;
            temp = temp->next;
        }
      }
  
    scanf("%d",&x);
      
    Solution ob;  
    head = ob.deleteNode(head,x); 
      
        
        printList(head);           
        while(head->next!=NULL)
        {
    	    temp=head;
    	    head=head->next;
    	    free(temp);
    	}
    	
    	free(head);
	}
	return 0;
}

// } Driver Code Ends