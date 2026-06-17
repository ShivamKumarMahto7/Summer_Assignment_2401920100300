class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
   unordered_map<int , int>freq;
   int n1 = nums1.size();
   int n2 = nums2.size();
   vector<int>ans;
   for(int i = 0 ; i<n2 ; i++){
    freq[nums2[i]] = i ;
   }
   for(auto num : nums1){
    int x = freq[num]+1 ;
    bool check = false;
    while(x<n2){
        if(num<nums2[x]){
            ans.push_back(nums2[x]);
            check = true;
            break;
        }
        x++;
    }
    if(check==false){
        ans.push_back(-1);
    }
   }
     return ans;   
    }
};
