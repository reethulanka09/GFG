/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        vector<int>vec;
        while(head){
            vec.push_back(head->data);
            head=head->next;
        }
        sort(vec.begin(),vec.end());
        Node* dummy = new Node(vec[0]);
        Node* temp = dummy;
        for(int i=1;i<vec.size();i++){
            temp->next = new Node(vec[i]); 
            temp = temp->next;
        }
        return dummy; 
    }
};