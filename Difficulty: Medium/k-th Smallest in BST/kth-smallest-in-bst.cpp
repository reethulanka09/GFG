/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void inord(Node* root, vector<int>&vec){
        if(root!=NULL){
            inord(root->left,vec);
            vec.push_back(root->data);
            inord(root->right,vec);
        }
    }
    int kthSmallest(Node *root, int k) {
        // code here
        vector<int>vec;
        inord(root,vec);
        if(k>vec.size()) return -1;
        else return vec[k-1];
        
    }
};