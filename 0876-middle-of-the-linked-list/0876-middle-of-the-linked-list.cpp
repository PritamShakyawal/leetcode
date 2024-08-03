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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
    int cnt = 0;
    while(temp != NULL){
        temp = temp -> next;
        cnt++;
    }
        
        
         int ans = (cnt/2)+1;
        int cnt1 = 1;
         temp = head;
        while(cnt1<ans){
            temp = temp->next;
         cnt1++;
        }
        return temp;
    }
};