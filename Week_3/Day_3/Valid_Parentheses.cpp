class Solution {
public:
    bool isValid(string s) 
    {
        vector<char>st; 
        int l = s.length();
        
        if(l%2!=0)
        {
            return false ;
        }for(int i=0;i<l;i++)
        {
            char ch = s[i];
            if(ch == '('||  ch== '{'|| ch=='['){
                st.push_back(ch);

            }
            else{
                if(st.size()==0){
                    return false ;
                }
                char top = st.back();
                if((ch==')' && top!='(') || (ch=='}' && top!='{') || (ch==']' && top!='[')){
                    return false ;
                }
                st.pop_back();
            }
            }
        
if (st.size() == 0) {
    return true;
} else {
    return false;
}


    }
};
