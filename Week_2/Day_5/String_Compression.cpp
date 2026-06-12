class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int count = 1;
        int j =0;
        for(int i =1 ; i<n ; i++){
            if(chars[i]==chars[i-1]){
                count++;
            }
            else{
                if(count>1){
                chars[j] = chars[i-1];
                 string num = to_string(count);
                 int k = 0;
                 j++;
                while(k<num.size()){
                chars[j] = num[k];
                j++;
                k++;
                }

                   count = 1;
                }
                else{
                     chars[j] = chars[i-1];
                     j++;               
                }
                
            }
        }
        chars[j] = chars[n-1];
        j++;
          if(count>1){
                 string num = to_string(count);
                 int k = 0;
                while(k<num.size()){
                chars[j] = num[k];
                j++;
                k++;
                }
                }
  
        return j;
        
    }
};

