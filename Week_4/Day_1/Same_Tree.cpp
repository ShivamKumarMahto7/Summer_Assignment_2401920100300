class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        if(p==q){
            return true;
        }
        q1.push(p);
        q2.push(q);
        while(!q1.empty() && !q2.empty()){
            auto f1 = q1.front();
            auto f2 = q2.front();
            q1.pop();
            q2.pop();
            if (f1 == NULL && f2 == NULL){
                continue;
            }
            if (f1 == NULL || f2 == NULL){
                return false;
            }
            if(f1->val != f2->val){
                return false;
            }
    
            q1.push(f1->left);
            q1.push(f1->right);

             q2.push(f2->left);
             q2.push(f2->right);
        

        }
        return true;
        
    }
};
