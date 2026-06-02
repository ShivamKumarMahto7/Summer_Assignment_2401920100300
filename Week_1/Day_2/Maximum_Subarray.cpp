class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int maxi2 = INT_MIN;
        int sum =0;
        int count =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
                break;
            }
            maxi2 = max(maxi2,nums[i]);
            count++;
        }
        if(count!=nums.size()){
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum<0){
                sum=0;
            }
            maxi = max(sum,maxi);
        }
        return maxi ; 
        }   
        return maxi2;
    }
};
