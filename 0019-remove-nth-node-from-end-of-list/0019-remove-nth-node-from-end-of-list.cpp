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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL)
        {
            cnt++;
            temp = temp -> next;
        }
        if(cnt == n)  
        {
            head = head -> next;
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        for(int i = 1; i <= n; i++)  fast = fast -> next;
        while(fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        slow -> next = slow -> next -> next;
        return head;
    }
};