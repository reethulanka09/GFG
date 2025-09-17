

class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<char>st;
        stack<int>numStack;
        string ss;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=']' and isalpha(s[i]) or s[i]=='['){
                st.push(s[i]);
            }
            else if (isdigit(s[i])) {
                int num = 0;
                while (i<s.size() && isdigit(s[i])) {
                    num=num*10+(s[i]-'0');
                    i++;
                }
                i--;
                numStack.push(num);
            }
            else if(s[i]==']'){
                ss="";
                while(!st.empty() and st.top()!='['){
                    ss+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(ss.begin(),ss.end());
                int r=0;
                if(!numStack.empty()) r=numStack.top();
                string res="";
                while(r>0){
                    res+=ss;
                    r--;
                }
                numStack.pop();
                for(auto c:res){
                    st.push(c);
                }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};