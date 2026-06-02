class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum =0;
       
for(int i=0;i<k;i++){
    sum=nums[i]+sum;
}
int maxi = sum;
for(int i =k;i<n;i++){
    maxi = maxi-nums[i-k]+nums[i];
    if(maxi>sum){
        sum=maxi;
    }
}

return sum/k;
}
};
