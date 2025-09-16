class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int>st;
        st.push(stoi(arr[0]));
        for(int i=1;i<arr.size();i++){
            if(arr[i] != "+" && arr[i] != "-" && arr[i] != "*" && arr[i] != "/" && arr[i] != "^"){
                st.push(stoi(arr[i]));
            }
            else{
                if(!st.empty()){
                double a = st.top();
                st.pop();
                double b = st.top();
                st.pop();
                if(arr[i]=="+"){
                    st.push(b+a);
                }
                else if(arr[i]=="-"){
                    st.push(b-a);
                }
                else if(arr[i]=="*"){
                    st.push(b*a);
                }
                else if(arr[i]=="/"){
                    st.push(floor(b/a));
                }
                else{
                    st.push(floor(pow(b,a)));
                }
                }
            }
        }
        return st.top();
    }
};