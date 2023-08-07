/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        // step - 1
        Node* fir = head;
        Node* sec = head;
        while(fir != NULL)
        {
            sec = fir -> next;
            Node* cpy = new Node(fir -> val);
            fir -> next = cpy;
            cpy -> next = sec;
            fir = sec;
        }
                
        // step - 2
        fir = head;
        while(fir != NULL)
        {
            if(fir -> random != NULL)
            {
                fir -> next -> random = fir -> random -> next;
            }
            fir = fir -> next -> next;
        }
        
        
        // step -3
        Node* ans = new Node(0);
        Node* res = ans;
        fir = head;
        while(fir != NULL)
        {
            sec = fir -> next -> next;
            res -> next = fir -> next;
            res = res -> next;
            fir -> next = sec;
            fir = sec;
        }
        
        return ans -> next;
    }
};