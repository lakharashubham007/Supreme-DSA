class MinStack {
public:
    vector< pair<int, int>> st;  // Stack implemented as a vector of pairs (value, minimum value)

    MinStack() {
        // Constructor, no initialization needed here
    }
    
    void push(int val) {
        if(st.empty()){  // If the stack is empty
            pair<int,int> p = make_pair(val,val);  // Create a pair with value and minimum value as val
            st.push_back(p);  // Push the pair onto the stack
        }else{
            pair<int, int> p;
            p.first = val;  // Set the value of the pair as val
            p.second = min(val,st.back().second);  // Set the minimum value of the pair as the minimum of val and the previous minimum value in the stack
            st.push_back(p);  // Push the pair onto the stack
        }
    }
    
    void pop() {
        st.pop_back();  // Remove the top element from the stack
    }
    
    int top() {
        return st.back().first;  // Return the value of the top element in the stack
    }
    
    int getMin() {
        return st.back().second;  // Return the minimum value of the top element in the stack
    }
};
