class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int a =0;
        int b =0;
        while(a<s.length() && b<t.length()){
            if(s[a]==t[b]){
                a++;
                b++;
            }else{
                return false;
            }
        }
        return true;
    }
};
