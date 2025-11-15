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
    ListNode* reverse (ListNode* &head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL){
            next = curr -> next;
            curr ->next  = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }


    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            //ll is empty
            return true;
        }
        if(head->next == NULL){
            //LL has one node
            return true;
        }


        //>1 node in LL
        

        //step A: find the middle node
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        //slow is pointing to middle node

        //Step B: reverse LL after middle node
        ListNode* reverseLLkaHead = reverse(slow->next);
        
        //join ther reverse LL with reverse LL
        slow->next = reverseLLkaHead;


        //step C: start comparision:
        ListNode* temp1 = head;
        ListNode* temp2 = reverseLLkaHead;

        while(temp2 != NULL){
            if(temp1->val != temp2->val){
                return false;
            }
            else{
                temp1 = temp1->next;
                temp2 = temp2->next;

            }


        }
    return true;
    }
};