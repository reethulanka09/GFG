class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int i=0,j=0,m=-1;
        map<char,int>mpp;
        while(j<s.size()){
            mpp[s[j]]++;
            while(mpp.size()>k)
            {
                mpp[s[i]]--;
                if(mpp[s[i]] == 0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            if(mpp.size()==k){
                m=max(m,j-i+1);
            }
            j++;
        }
        return m;
        
    }
};