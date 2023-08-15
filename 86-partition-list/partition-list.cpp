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
    ListNode* partition(ListNode* head, int x) {
        ListNode *firstHalf=new ListNode(0), *Half=new ListNode(0);
        ListNode *ans = firstHalf, *ans2 = Half;
        
        while(head != NULL){

            if(head->val < x){
                ListNode *temp=new ListNode(head->val);
                firstHalf->next = temp;
                firstHalf = firstHalf->next;
            }
            else{
                ListNode *temp=new ListNode(head->val);
                Half->next = temp;
                Half = Half->next;
            }


            head = head->next;
        }


        firstHalf->next = ans2->next;

        return ans->next;
    }
};