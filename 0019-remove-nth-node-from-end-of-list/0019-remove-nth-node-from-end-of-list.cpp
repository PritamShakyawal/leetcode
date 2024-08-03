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
        if (head == NULL) {
        return NULL;
    }
//         if(head->next == NULL && n==1){
//             return NULL;
//         }
        
//         if(head->next->next == NULL && n==2){
//             head = head->next;
//             return head;
//         }
        
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        int k = count - n;
        if(k==0) {
            temp = head -> next;
            delete head;
            head = temp;
            return head;
        }
        temp = head;
        while(temp != NULL && k != 1){
            temp = temp->next;
            k--;
        }
        temp ->next = temp->next->next;
        return head;
    }
};