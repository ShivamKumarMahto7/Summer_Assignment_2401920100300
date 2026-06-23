class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
         if(root==NULL){
            return ans;
            }
        q.push(root);
        q.push(NULL);
        
        int count =0;
            vector<int>temp;
            while(!q.empty()){
                auto front = q.front();
                q.pop();
                if(front==NULL){
                    if(count%2==0){
                        ans.push_back(temp);
                    }
                    if(count%2==1){
                        reverse(temp.begin(),temp.end());
                        ans.push_back(temp);
                    }
                    if(!q.empty()){
                        q.push(NULL);
                    }
                    temp.clear();
                    count++;
                }
                else{
                    temp.push_back(front->val);
                    if(front->left!=NULL){
                        q.push(front->left);
                    }
                     if(front->right!=NULL){
                        q.push(front->right);
                    }
                }
            }

        return ans;
        
    }
};
