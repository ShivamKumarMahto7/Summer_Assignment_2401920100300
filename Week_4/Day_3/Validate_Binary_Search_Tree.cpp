class Solution {
public:
void recursion(TreeNode* root , vector<int>&ans){
    if(root==NULL){
        return ;
    }
    recursion(root->left , ans);
    ans.push_back(root->val);
    recursion(root->right , ans);
}
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        recursion(root , ans);
        for(int i =1 ; i<ans.size() ; i++){
            if(ans[i-1]>=ans[i]){
                return false;
            }
        }

        return true;
    }
};
