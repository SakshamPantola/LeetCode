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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL){
            return NULL;
        }
        
        ListNode* newnode = head;
        // ListNode* temp = head;
        ListNode* curr = head;

        newnode = newnode->next;
        
        while(curr!= NULL && newnode!=NULL){

            if(curr->val == newnode->val){
                ListNode* deno = newnode;
                curr->next = newnode->next;
                newnode = newnode->next;
                delete deno;
            }else{
               
            curr = curr->next;
             newnode = newnode->next;
            
       }
            // temp = temp->next;

        }


return head;

}

};