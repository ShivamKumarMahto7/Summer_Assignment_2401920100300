class Codec {
public:
void solve(TreeNode* root,string &s){
        if(root==NULL){
            s+="N,";
            return ;
        }
        s+=to_string(root->val)+",";
        solve(root->left,s);
        solve(root->right,s);
       
}

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s ="" ;
        solve(root,s);
        return s ;
        
    }

TreeNode* build(string &data , int &i){
    string val ="";
    while(i<data.size() && data[i]!=','){
        val+=data[i];
        i++;
    }
    i++;
    if(val=="N"){
        return NULL;
    }
    TreeNode* root = new TreeNode(stoi(val));
    root->left = build(data ,i);
    root->right = build(data ,i);

    return root;
}
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i =0;
       TreeNode* root = build(data , i);
       return root; 
        
    }
};
