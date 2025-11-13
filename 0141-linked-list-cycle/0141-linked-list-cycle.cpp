/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 //solving this problem with fcd (floid cycle detection ) slow and fast approach
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            //LL is empty
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }

            if(fast == slow){
                //loop is detected
                return true;
            }
        }
        return false;
    }
};