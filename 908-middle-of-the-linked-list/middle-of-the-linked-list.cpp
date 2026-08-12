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

        // slow-fast pointer approach 

        ListNode* slow = head;
        ListNode* fast = head;
        /*  fast != NULL when size of LL is even
           fast->next != NULL when size of LLL is odd 
        
        */
        while( fast != NULL && fast->next != NULL){ //  TC ->O(N) , SC ->O(1)
            slow = slow->next; 
            fast = fast->next->next;
        }
        return slow;
    
    }
};