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
    ListNode* reverseList(ListNode* head) {
//       stack<int> s;
//         ListNode* temp = head;
//         while(temp != NULL){
//             s.push(temp->val);
//             temp = temp->next;
//         }
//         temp = head;
//         while(temp != NULL){
//             temp->val = s.top();
//             s.pop();
//             temp = temp->next;
            
//         }
//         temp = head;
//         return temp;
        
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr != NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};