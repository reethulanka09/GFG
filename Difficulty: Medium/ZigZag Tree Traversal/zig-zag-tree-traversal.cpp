/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        queue<Node*>qe;
        qe.push(root);
        vector<int>ans;
        int a=0;
        while(!qe.empty()){
            int l = qe.size();
            vector<int>res;
            for(int i=0;i<l;i++){
                Node* node = qe.front();
                qe.pop();
                res.push_back(node->data);
                if(node->left!=NULL) qe.push(node->left);
                if(node->right!=NULL) qe.push(node->right);
            }
            a++;
            if(a%2==0){
                for(int i=res.size()-1;i>=0;i--){
                    ans.push_back(res[i]);
                }
            }
            else{
                for(int i=0;i<res.size();i++){
                    ans.push_back(res[i]);
                }
            }
        }
        return ans;
    }
};