//
//   Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
//  
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return NULL;
//         }
//             ListNode* temp = head;
//             ListNode* prev = head;
            
//             int cnt=0;
//             int n = 0;
//             while(temp != NULL){
//                 temp = temp->next;
//                 cnt++;
//             }
//               n = (cnt/2);
            
            
//             // for(int i=0;i<n;i++){
//             //     del = del->next;
//             // }


//             for(int i=0;i<n-1;i++){
//                 prev = prev->next;
//             }

//             ListNode* del  = prev->next;

//             prev->next = del->next;
//             delete del;
         
//             return head;
//     }
// };





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
    ListNode* deleteMiddle(ListNode* head) {
    ListNode* slow = head;   
    ListNode* fast = head;   
    ListNode* prev = head;   

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    while(fast && fast->next){
        prev = slow; 
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;
    return head;
    }
};