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
 int getLength(ListNode* &head){
    int len = 0;
    ListNode* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
        
    }
    return len;
}

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
        //empty LL
        return head;
    }
    
    int len = getLength(head);
    if(k > len){
        //k is greater then len
        return head;
    }

        // k <= len

    //STEP A: reverse K groups
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* forward = curr->next;
    int count = 1;     //i you want to set count = 0 then, 
    while(count <= k){ // change condition to (count < k)  
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
        count++;
    }


    //STEP B: recursive call
    if(forward != NULL){
        //we still have nodes to reverse
        head->next = reverseKGroup(forward,k);
    }

    //STEP C: return to head of LL
    return prev;
    }
};