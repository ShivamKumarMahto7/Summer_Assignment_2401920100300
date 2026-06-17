class MinStack {
public:
    stack<int> s;
    stack<int> minS;
    MinStack() {
       
        
    }
    
    void push(int value) {
        s.push(value);
        if(minS.empty()|| value<=minS.top()){
            minS.push(value);
        }
        
    }
    
    void pop() {
        if(s.top()==minS.top()){
            minS.pop();  
        }
        s.pop();
        
    }
    
    int top() {
        int ans = s.top();
        return ans;
        
    }

    int getMin() {
         int ans = minS.top();
         return ans;
        }

        
    
};
