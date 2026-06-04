class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r = matrix.size();
        int c = matrix[0].size();
        int count = 0;
        int total = r*c;
        int startrow = 0;
        int startcol = 0;
        int endrow = r-1;
        int endcol = c-1;
        while(count<total){
            if(count<total){
        for(int i =startcol ; i <= endcol ; i++){
            ans.push_back(matrix[startrow][i]);
            count++;
        }}
        startrow++;
         if(count<total){
         for(int i =startrow  ; i <= endrow ; i++){
            ans.push_back(matrix[i][endcol]);
            count++;
        }
        }
        endcol--;
         if(count<total){
        for(int i =endcol ; i>=startcol ;i--){
            ans.push_back(matrix[endrow][i]);
            count++;
        }}
       endrow--;
        if(count<total){
          for(int i =endrow ; i>=startrow ;i--){
            ans.push_back(matrix[i][startcol]);
            count++;
        }}
        startcol++;
        }
        return ans ;
    }
};
