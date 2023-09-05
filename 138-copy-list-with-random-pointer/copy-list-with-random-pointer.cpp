/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        unordered_map<Node*, Node*> umap;

        Node *ans=new Node(head->val),*curr=head->next,*acurr=ans;
        umap[head]=ans;
        while(curr){
            acurr->next=new Node(curr->val);
            acurr=acurr->next;
            umap[curr]=acurr;
            curr=curr->next;
        }

        curr=head;
        acurr=ans;

        while(curr){
            acurr->random=umap[curr->random];
            acurr=acurr->next;
            curr=curr->next;
        }

        return ans;

    }
};
























