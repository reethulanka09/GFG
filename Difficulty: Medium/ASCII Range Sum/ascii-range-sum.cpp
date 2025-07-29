class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        map<char,vector<int>>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]].push_back(i);
        }
        vector<int>ans;
        for(auto i:mpp){
            int c=i.second.size();
            if(c>1){
                int a=i.second[0];
                int b=i.second[c-1];
                int ss=0;
                for(int j=a+1;j<b;j++){
                    ss+=(int(s[j]));
                }
                if (ss>0) ans.push_back(ss);
            }
        }
        return ans;
    }
};