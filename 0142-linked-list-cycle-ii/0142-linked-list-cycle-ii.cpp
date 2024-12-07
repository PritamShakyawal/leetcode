/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
         unordered_set<ListNode*> s;
        ListNode* temp = head;
        while(temp != NULL){
            if(s.find(temp) != s.end()) return temp;
            
            else{
                s.insert(temp);
                temp = temp->next;
            }
        }
        return NULL;
        
//         if(head == NULL || head->next == NULL) return false;
        
//         ListNode* slow = head;
//         ListNode* fast = head;
        
//         while(fast != nullptr && fast->next != nullptr){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast){
//                 return slow->next;
//             }
//             return NULL;
    }
    
};