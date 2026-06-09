class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char , int> mp;
        unordered_map<char , int> mp1;
        int n = s1.size();
        int m = s2.size();

        if(n > m){
            return false;
          }
        for(int i = 0; i < n; i++){
            mp[s1[i]]++;
         }
      
        for(int i = 0; i < n; i++){
            mp1[s2[i]]++;
        }
        if(mp1 == mp){
            return true;
        }
        int j = n;
        while(j < m){
            mp1[s2[j]]++;      
            mp1[s2[j-n]]--; 
              
            if(mp1[s2[j-n]] == 0){
                mp1.erase(s2[j-n]);
            }
            if(mp1 == mp){
                return true;
            }
            j++;
        }

        return false;
    }
};
