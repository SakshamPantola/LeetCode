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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
        
//         if(head == NULL || head->next == NULL){
//             return head;
//         }

//       ListNode* temp = head;
//         int ans;
//         int cnt=0;
//         while(temp!=NULL){
//             temp= temp->next;
//             cnt++;
//         }
//         int n = (cnt/2);

//     for(int i=0;i<n;i++){
//         temp = head->next;
//         head = temp;
//     }

//     return temp;
//     }
// };



class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};