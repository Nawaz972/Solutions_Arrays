/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* midNode(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast-> next != NULL && fast -> next -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    ListNode* revNode(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head ;
        ListNode* temp;
        while(curr != NULL)
        {
            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
        
        
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL)
        {
            return true;
        }
        ListNode* temp = head;
        ListNode* mid = midNode(head);
        ListNode* rev = revNode(mid -> next);
        mid = mid -> next;
        while(temp != mid -> next && rev != mid -> next)
        {
            if(temp -> val != rev -> val)
            {
                return false;
            }
            temp = temp -> next;
            rev = rev -> next;
        }
        return true;
    }
};