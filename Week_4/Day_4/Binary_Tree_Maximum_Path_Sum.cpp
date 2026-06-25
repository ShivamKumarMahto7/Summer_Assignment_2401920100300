class Solution {
public:
   int postorder(TreeNode* root, int& maxi)
    {
        if (root == NULL)
        {
            return 0;
        }

        int left = postorder(root->left, maxi);
        int right = postorder(root->right, maxi);

        if(left < 0)
        {
        left = 0;
         }

        if(right < 0)
        {
            right = 0;
          }

        int currentSum = root->val + left+right;

        if(currentSum > maxi)
        {
            maxi = currentSum;
          }
        if(left > right)
         {
            return root->val + left;
        }
        else
         {
             return root->val + right;
        }
    }

    int maxPathSum(TreeNode* root){
        int maxi = INT_MIN;

        postorder(root, maxi);
        return maxi;

        
    }
};
