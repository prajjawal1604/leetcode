/**
 * Definition for singly-linked list.
 *  
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *i=head,*temp;
        int j=0;

        while(i!=NULL && i->next!=NULL){

            int count=0;
            temp=head;
            while(count!=j){

                ++count;
                if(i==temp)return count;
                temp=temp->next;


            }
            ++j;
            // if(i->next == NULL)break;
            i=i->next;

        }

        return 0;
    }
};