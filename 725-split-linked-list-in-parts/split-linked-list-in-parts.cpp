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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        vector<ListNode*> ans;
        ListNode *start = new ListNode;

        start = head;

        while(start!=NULL){
            ++n;
            start=start->next;
        }

        int part=n/k, extra=n%k;

        for(int i=0,j=0;i<k;++i,++j){
            ListNode *temp = new ListNode;
            temp = head;

            if(head!=NULL){
                if(j<extra)
                    for(int num=0;num<part;++num)
                        head=head->next;

                else
                    for(int num=0;num<part-1;++num)
                        head=head->next;
                    
                ListNode *Last = new ListNode;
                Last=head;
                head=head->next;
                Last->next=NULL;
            }


            ans.push_back(temp);
        }

        return ans;

    }
};