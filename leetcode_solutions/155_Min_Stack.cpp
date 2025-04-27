class MinStack {
    private:
        int top_val;
        vector<int> arr;
        vector<int> min_val;
    public:
        MinStack() {
            top_val = -1;
        }
        
        void push(int val) {
            arr.push_back(val);
            if(top_val==-1){
                min_val.push_back(val);
            }
            else if(min_val.back()>=val){
                min_val.push_back(val);
            }
            top_val++;
        }
        
        void pop() {
            top_val--;
            if(min_val.back() == arr.back()){
                min_val.pop_back();
            }
            arr.pop_back();
        }
        
        int top() {
            return arr.back();
        }
        
        int getMin() {
            return min_val.back();
        }
    };
    
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */