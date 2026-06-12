class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>m;
        for(int i =0;i<strs.size();i++){
            string orgnl = strs[i];
            string temp = orgnl;
            sort(temp.begin(),temp.end());
            m[temp].push_back(orgnl);
        }
        vector<vector<string>>ans;
        for(auto i : m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
