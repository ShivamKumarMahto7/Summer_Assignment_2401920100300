class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
           unordered_map<char , int> mp;
        unordered_map<char , int> mp1;
        vector<int> ans;
        int n = p.size();
        int m = s.size();

        if(n > m){
            return ans;
          }
        for(int i = 0; i < n; i++){
            mp[p[i]]++;
         }
        for(int i = 0; i < n; i++){
            mp1[s[i]]++;
        }
        if(mp1 == mp){
           ans.push_back(0);
        }
        int j = n;
        int i =0;
        while(j < m){
            i++;
            mp1[s[j]]++;       
            mp1[s[j-n]]--; 
              
            if(mp1[s[j-n]] == 0){
                mp1.erase(s[j-n]);
            }
            if(mp1 == mp){
                ans.push_back(i);
            }
            j++;
        }

        return ans;
        
    }
};
