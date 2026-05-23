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

ListNode* pushback(ListNode** head,int value){  

    ListNode* temp = *head;
    ListNode* newnode = new ListNode(value);

        if(*head == NULL){
            *head = newnode;
            return *head;
        }

    newnode->next = NULL;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newnode;

    return *head;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        
         ListNode* mergedHead = NULL;

        while(curr1 != NULL && curr2 != NULL){

            if(curr1->val < curr2->val){
            pushback(&mergedHead,curr1->val);
            curr1 = curr1->next;
        }
        else if(curr1->val > curr2->val){
            pushback(&mergedHead,curr2->val);
            curr2 = curr2->next;
        }
        else{
            pushback(&mergedHead,curr1->val);
            pushback(&mergedHead,curr2->val);
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
 }

while (curr1 != NULL) {
    pushback(&mergedHead, curr1->val);
    curr1 = curr1->next;
}


while (curr2 != NULL) {
    pushback(&mergedHead, curr2->val);
    curr2 = curr2->next;
}

return mergedHead;
    }

};