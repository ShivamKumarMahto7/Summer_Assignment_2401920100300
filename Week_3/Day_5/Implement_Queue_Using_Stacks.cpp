class MyQueue {
public:
queue<int>q;

    MyQueue() {
        
    }
    
    void push(int x) {
        q.push(x);
        
    }
    
    int pop() {
          int a = 0;
        if(!q.empty()){
         a = q.front();
            q.pop();
        }
        return a;
    }
    
    int peek() {
        return q.front();
        
    }
    
    bool empty() {
        if(!q.empty()){
              return false;
        }
        else{
           
             return true ;
        }
        
    }
};
