class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>ans(r, vector<int>(c));
        if (m*n != r*c){
            return mat;
           }
        int index = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
               ans[i][j] = mat[index/n][index%n];
               index++;
            }
         }
        return ans;
    }
};
