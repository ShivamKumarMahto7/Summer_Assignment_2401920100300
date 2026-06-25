class Solution {
public:
bool recursion(TreeNode* root ,int targetSum , int sum ){
            if(root==NULL){
            return false;
        }
 
         sum+=root->val;
        if(root->left==NULL && root->right==NULL && sum==targetSum){
            return true;
        }
          if(root->left==NULL && root->right==NULL  && sum!=targetSum){
            return false;
        }
     
        bool left = recursion(root->left ,targetSum ,sum);

        bool right = recursion(root->right ,targetSum ,sum);

        return left || right ;
}
    bool hasPathSum(TreeNode* root, int targetSum) {

        int sum =0;
        return recursion(root ,targetSum ,  sum );

        
    }
};
