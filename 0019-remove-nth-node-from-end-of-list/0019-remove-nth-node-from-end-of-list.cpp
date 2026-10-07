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
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;

        }
        int indexToRemove = count-(n-1);

        int i = 1;
        ListNode* tempo = head;
        while(i<indexToRemove-1){
            tempo = tempo->next;
            i++;
        }
        if (count == 1 ){
            //only single node in 
            ListNode* ans = NULL;
            return ans;
        }
        
        ListNode* current = tempo->next;
        ListNode* prev = tempo;



        if(indexToRemove == 1){
            //we have to remove head
            head = current;
            return head;
        }
        if(indexToRemove == count){
            //have to remove last element
            prev->next = NULL;
        }


        prev->next = current->next;


        return head;
    }
};