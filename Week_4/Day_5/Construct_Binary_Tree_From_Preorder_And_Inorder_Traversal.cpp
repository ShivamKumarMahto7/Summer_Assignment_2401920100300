class Solution {
public:
int getIndex(vector<int>& inorder,int value){
    for(int i = 0; i<inorder.size();i++){
        if(inorder[i]==value){
            return i ;
        }
    }
    return -1;
}
TreeNode* recursion(vector<int>& preorder, vector<int>& inorder , int &startIndex, int startIN , int endIN ){
    if(startIndex >= preorder.size()){
        return NULL;
    }
     if(startIN>endIN){
        return NULL;
     }
    int element = preorder[startIndex];
    startIndex++;
    TreeNode* root = new TreeNode(element);
    int index = getIndex(inorder ,element);
    root->left = recursion(preorder,inorder ,startIndex ,startIN , index-1  );
    root->right = recursion(preorder,inorder ,startIndex ,index+1 , endIN );
    return root;


}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int startIndex  = 0;
        int n = inorder.size();
        int startIN = 0;
        int endIN = n-1;
       TreeNode*  root = recursion( preorder ,inorder, startIndex ,startIN ,endIN );
       return root;

        
    }
};
