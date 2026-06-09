class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxi = INT_MIN ;    
        int i = 0;
         unordered_map<char,int>freq;
         for(int j = i ; j<n ; j++ ){
            freq[s[j]]++;
        while(freq[s[j]]>1){
            freq[s[i]]--;
            i++;

        }
        maxi = max(maxi , j-i+1);       
         } 
        if(maxi==INT_MIN){
            return 0;
        }
        return maxi;      
    }
};
