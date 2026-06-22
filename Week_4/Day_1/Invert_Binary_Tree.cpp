class Solution {
public:
   void recuresion(TreeNode* root , TreeNode* &root1 ){
    if(root==NULL){
        root1 = NULL;
        return ;
    }
      root1 = new TreeNode(root->val);

    recuresion(root->right , root1->left);
    recuresion(root->left , root1->right);
   }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL || root->left==NULL && root->right==NULL){
            return root;
        }
        TreeNode* root1 = NULL;
        recuresion( root , root1 );
        return root1;

    }
};
