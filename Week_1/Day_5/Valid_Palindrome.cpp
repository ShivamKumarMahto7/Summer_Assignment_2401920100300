class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string ans ="";
        for(int i =0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){
                ans+=s[i];
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                ans+=s[i]+32;
            }
            else if(s[i]>='0'&&s[i]<='9'){
                ans+=s[i];
            }
        }
        if(ans.empty()){
            return true;
        }
        int m = ans.length();
        int a =0;
        int e = m-1;
        while(a<=e){
            if(ans[a]!=ans[e]){
               return false;
            }else{
                a++;
                e--;
            }
        }
        return true;
        
    }
};
