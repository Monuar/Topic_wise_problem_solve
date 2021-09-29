class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node* > q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* current = q.front();
                q.pop();
                if(i != n-1){
                    current -> next = q.front();
                }
                else current -> next = nullptr;
                if(current->left) q.push(current->left);
                if(current->right) q.push(current->right);
            }

        }
        return root;
    }
};
