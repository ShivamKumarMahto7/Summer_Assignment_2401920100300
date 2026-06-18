class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) { 
        int n = temperatures.size();
        vector<int>ans;
        ans.push_back(0);
        stack<int>s;
        s.push(n-1);
        for(int i =n-2 ; i>=0 ;i--){
        while(!s.empty()){
            int j = s.top();   
            if(temperatures[i]<temperatures[j]){
               ans.push_back(j-i); 
              s.push(i);
               break;
            } 
            else{
                s.pop();
            }
        }
        if(s.empty()){
            ans.push_back(0);
            s.push(i);
        }}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
