class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int>temp;
        int count =0;
        int r = ransomNote.size();
        int m = magazine.size();
        if(r>m){
            return false;
        }
         for(int i =0 ;i<r;i++){
            char ch = ransomNote[i];
            temp[ch]++;
        }
         for(int i =0 ;i<m;i++){
            char ch = magazine[i];
            temp[ch]--;
        }
        for(auto x : temp){
            if(x.second>0){
                return false;
            }
        }
        return true;
    }
};
