class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty()){
            auto f1 = q.front();
            q.pop();
            auto f2 = q.front();
            q.pop();
  
            if (f1==NULL && f2==NULL){
                continue;
             }
            if (f1==NULL || f2==NULL){
                return false;
            }
            if(f1->val != f2->val){
                return false ;
             }
    
            q.push(f1->left);
            q.push(f2->right);

             q.push(f1->right);
             q.push(f2->left);

        }
         return true;
        
    }
};
