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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> nodes;
        ListNode * start= new ListNode;
        start = head;
        while(head!=NULL){
            nodes.push_back(head->val);
            head=head->next;
        }

        if(nodes.size()==0 || k%nodes.size()==0) return start;

        k=k%nodes.size();

        reverse(nodes.begin(),nodes.end()-k);
        reverse(nodes.end()-k,nodes.end());
        reverse(nodes.begin(),nodes.end());

        head=start;
        int i=0;
        while(head!=NULL){
            head->val=nodes[i++];
            head=head->next;
        }
            

        return start;

    }
};