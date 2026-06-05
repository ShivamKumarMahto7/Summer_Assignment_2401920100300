class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<char, int> mp;
        string result ="";
        int n = strs.size();
        int i =0;
        while(true){
       for (string word : strs){
        if(i>=word.size()){
                return result;
            }
         mp[word[i]]++;
       }
            if(mp.size()==1){
                result+=strs[0][i];
            }
            else{
                break;
            }       
         mp.clear();
         i++;
       }
        return result;
        
    }
};
