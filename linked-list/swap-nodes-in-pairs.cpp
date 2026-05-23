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
    ListNode* swapPairs(ListNode* head) {
        
        if(head ==NULL || head->next == NULL){
            return head;
        }

        ListNode* st = head;
        ListNode* curr = head->next;
        ListNode* prev = NULL;

        while(st!=NULL && curr!=NULL){

        ListNode* sw = curr->next ;
        curr->next = st;
        st->next = sw;
        if(prev != NULL){
            prev->next = curr;
        }else{
            head = curr;
        }
        
        prev = st;
        st = sw;
        if(sw != NULL){
            curr = sw->next;
        }else{
            curr = NULL;
        }



        }
        

        return head;
    }
};