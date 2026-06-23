class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int size = q.size();   
            vector<int> temp;
            for (int i = 0; i < size; i++) {
            TreeNode* frontf = q.front();
            q.pop();
            temp.push_back(frontf->val);
            if(frontf->left){
                q.push(frontf->left);
            }
            if(frontf->right){
                q.push(frontf->right);
                }
            }
            ans.push_back(temp);
        }
    return ans;
    }
};
