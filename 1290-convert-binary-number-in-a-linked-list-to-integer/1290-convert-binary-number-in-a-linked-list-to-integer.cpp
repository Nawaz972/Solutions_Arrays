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
    int getDecimalValue(ListNode* head) {
        int sum = 0, cnt = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            temp = temp -> next;
            cnt++;
        }
        int p = pow(2, cnt);
        temp = head;
        while(temp != NULL)
        {
            p /= 2;
            sum += p * temp -> val;
            temp = temp -> next;
        }
        return sum;
    }
};