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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> rev;
        int i=0,j=0;
        ListNode* start = new ListNode;
        start = head;
        while(head!=NULL){
            if(++i>=left)
                rev.push_back(head->val);
            
            if(i==right) break;

            head=head->next;
        }

        head=start;



        reverse(rev.begin(),rev.end());
        i=0;
        while(head!=NULL){
            if(++i>=left)
                head->val = rev[j++];
            
            if(i==right) break;
            head=head->next;
        }

        return start;
    }
};