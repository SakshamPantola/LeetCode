/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int count(ListNode* head){
    int cnt = 0;
    ListNode* temp = head;
    
    while(temp!= NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;


        while(temp1 != NULL && temp2!= NULL){

            if((temp1 == temp2)){
                return temp1;
            }

            if(count(temp1)<count(temp2)){
                temp2 = temp2->next;
            }
            else if(count(temp1)>count(temp2)){
                temp1 = temp1->next;
            }
            else if(count(temp1) == count(temp2)){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
    
    return 0;
    }
};