class Solution {
public:
    string reverseWords(string s) {
    string s1="";
    int n = s.size();
     string s2 ="";
    for(int i =0;i<n;i++)
        if(s[i]!=' '){
         s2+=s[i];
    }
    else{
        reverse(s2.begin(),s2.end());
        s1+=s2;
        s1+=" ";
        s2="";
    }
    reverse(s2.begin(),s2.end());
    s1+=s2;
    return s1;

    }
};
