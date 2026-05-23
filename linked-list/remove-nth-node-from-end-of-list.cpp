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

        if(head == NULL){
            return NULL;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* newnode = head;
        int cnt = 0;
        int iterate=0;

        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }

        if (n == cnt) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // ListNode* iterate = head;

        while(iterate< cnt-n){
            prev = newnode;
            newnode = newnode->next;
            iterate ++;
        }

        ListNode* neww = newnode;
        prev->next = newnode->next;
        delete neww;



    return head;
    }
};