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
        ListNode* first = new ListNode();
        first = head;
        int size=0;
        // vector<ListNode> track;

        while(head!=NULL){
            ++size;
            head=head->next;
        }
        if(size<2) return NULL;
        if(size==n) return first->next;
        head = first;
        for(int i=0;i<size-1;++i){
            if(i==size-n-1){
                head->next = head->next->next;
                break;
            }

            head=head->next;
        }
        
        return first;
    }
};