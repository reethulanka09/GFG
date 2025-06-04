class Solution {
  public:
    int countsubs(string&s,int k){
        int i=0,c=0,cnt=0;
        vector<int>vec(26,0);
        for(int j=0;j<s.size();j++){
            int x=s[j]-'a';
            if(vec[x]==0){
                cnt++;
            }
            vec[x]++;
            while(i<=j and cnt>k){
                int y=s[i]-'a';
                vec[y]--;
                if(vec[y]==0){
                    cnt--;
                }
                i++;
            }
            c+=(j-i+1);
        }
        return c;
    }
    int countSubstr(string& s, int k) {
        return countsubs(s,k)-countsubs(s,k-1);
    }
};