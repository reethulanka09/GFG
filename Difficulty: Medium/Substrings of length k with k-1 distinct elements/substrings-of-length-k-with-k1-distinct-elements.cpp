class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        map<char , int>mpp;
        int i = 0 , j = 0;
        int c = 0;
        while(j < s.size()){
            mpp[s[j]]++;
            if( j-i+1 ==k){
                if(mpp.size()==k-1){
                    c++;
                }
                mpp[s[i]]--;
                if(mpp[s[i]] == 0){
                    mpp.erase(s[i]);
                }
                i++; 
            }
            j++;
        }
        return c;
    }
};