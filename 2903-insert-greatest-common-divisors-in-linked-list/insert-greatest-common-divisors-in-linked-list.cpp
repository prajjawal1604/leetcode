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
    // int gcd(int a, int b){
    //     int ans=1;

    //     if(a%b==0 || b%a==0) return min(a,b);



    //     return 1;

    // }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode *ans = new ListNode, *lastNode = new ListNode;
        lastNode=head;
        ans=head;

        head=head->next;
        
        while(head!=NULL){

            int gcdNumber = __gcd(lastNode->val, head->val);

            ListNode * temp= new ListNode(gcdNumber); 

            temp->next= head;
            lastNode->next=temp;
            lastNode=head;
            head=head->next;
            

        }

        return ans;
    }
};