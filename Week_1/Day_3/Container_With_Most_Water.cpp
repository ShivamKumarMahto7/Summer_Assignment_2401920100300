class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i =0;
        int j = n-1;
        int maxi = INT_MIN;
         while(i<j){
            if(height[i]>=height[j]){
                int result = abs(j-i)*height[j];
                maxi = max(maxi , result);
                j--;
            }
             else if(height[i]<=height[j]){
                int result = abs(j-i)*height[i];
                maxi = max(maxi , result);
                i++;
            }
        }
        return maxi;      
    }
};
