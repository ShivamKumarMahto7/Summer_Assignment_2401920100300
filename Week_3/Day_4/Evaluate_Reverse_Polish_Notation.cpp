class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;

        for(auto x: tokens){
            if(x == "+" || x == "-" || x == "*" || x == "/") {
                int a = s.top();
                  s.pop();
                  int b = s.top();
                    s.pop();
                if(x=="+" ){
                     int c = a+b ;
                    s.push(c);
                 }
                    else if(x=="/" ) {
                    int c = b/a ;
                    s.push(c);
  
                 }
                   else if(x=="*" ){
                    int c = a*b ;
                    s.push(c);

                 }
                    else if(x=="-"){
                    int c = b-a ;
                    s.push(c);
 
                }
            }
            else{
              int y = stoi(x);
                s.push(y);

            }
        }
        int ans = s.top();
        return ans;
        
    }
};
