class Solution {
public:
    int longestValidParentheses(string s) {
            stack<int> st;
        st.push(-1); // Push -1 as initial index for calculating the length

        int maxLen = 0;

        for(int i=0; i<s.length(); i++){
            char ch = s[i];

            if(ch == '('){
                st.push(i); // Push the index of '(' character
            }else{
                st.pop(); // Remove the top index ('(' character)
                if(st.empty()){
                    st.push(i); // If stack is empty, push the current index as a new starting point for calculating length
                }else{
                    int len = i - st.top(); // Calculate the length between the current index and the new starting point
                    maxLen = max(len, maxLen); // Update the maximum length if necessary
                }
            }
        }
    return maxLen; // Return the maximum valid parentheses length
    }
};