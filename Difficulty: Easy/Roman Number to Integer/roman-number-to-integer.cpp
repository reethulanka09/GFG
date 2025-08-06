class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        map<char,int>mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();i++){ 
            if(mpp[s[i]]>=mpp[s[i+1]]){
                ans+=mpp[s[i]];
            }
            else{
                ans-=mpp[s[i]];
            }
        }
        if(mpp[s.size()-2]>=mpp[s.size()-1]) ans += mpp[s.size()-1];
        else ans-=mpp[s.size()-1];
        return ans;
    }
};