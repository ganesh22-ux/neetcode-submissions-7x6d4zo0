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
        // brute fource
        // unordered_map<Node*,Node*> map;
        // Node* cur=head;
        // while(cur){
        //     Node* copy= new Node(cur->val);
        //     map[cur]=copy;
        //     cur=cur->next;
        // }
        // cur=head;
        // while(cur){
        //     Node* copy=map[cur];
        //     copy->next=map[cur->next];
        //     copy->random=map[cur->random];
        //     cur=cur->next;
        // }
        // return map[head];
        if(head==nullptr){
            return nullptr;
        }
        Node* curr=head;
        while(curr){
            Node* copy= new Node(curr->val);
            copy->next=curr->next;
            curr->next=copy;
            curr=copy->next;
        }
        curr=head;
        while(curr){
            if(curr->random){
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }
        Node* dummy= new Node(0);
        Node* ass=dummy;
        curr=head;
        while(curr){
            Node* copy=curr->next;
            curr->next=copy->next;
            ass->next=copy;
            ass=copy;
            curr=curr->next;
        }
        return dummy->next;

        
    }
};
