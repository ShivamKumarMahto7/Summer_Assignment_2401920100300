class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        vector<int> pre(n, 0);
        int i = 1;
        int j = 0;

        while(i < n) {
            if(s[i] == s[j]) {
                j++;
                pre[i] = j;
                i++;
            }
            else{
                if(j != 0) {
                    j = pre[j - 1];
                }
                else{
                    pre[i] = 0;
                    i++;
             }
            }
          }

        int x = pre[n-1];
        if(x == 0) {
            return false;
        }

        int len = n-x;
        if (len == n) {
        return false;
        }

        if (n%len == 0) {
         return true;
           }

        return false;
    }
};
