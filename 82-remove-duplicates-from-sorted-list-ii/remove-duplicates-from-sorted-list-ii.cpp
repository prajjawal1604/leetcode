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
    ListNode* deleteDuplicates(ListNode* head) {
        int last=-101;
        vector<int> track;
        ListNode *pointer = new ListNode, *ans=new ListNode;
        ans=pointer;
        
        while(head!=NULL){

            if(head->val!=last){
                last=head->val;
                track.push_back(head->val);
            }
            else if(track.size()!=0 && track[track.size()-1]==head->val)
                track.pop_back();
            
            head=head->next;
        }

        for(int it:track){
            ListNode *temp=new ListNode(it);
            pointer->next=temp;
            pointer=pointer->next;
        }

        return ans->next;
    }
};