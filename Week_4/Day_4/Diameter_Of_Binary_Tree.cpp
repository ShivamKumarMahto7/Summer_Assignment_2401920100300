
class Solution {
public:
  int Diameter = 0;
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        Diameter = max(Diameter , left+right);
        return max(left , right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
      
        if(root==NULL){
            return 0;
        }
        height(root);
        return Diameter;
 
    }
};
