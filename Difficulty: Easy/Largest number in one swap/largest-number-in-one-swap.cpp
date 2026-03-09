class Solution {
  public:
    string largestSwap(string &s) {
        int n = s.size();
        vector<int>suffix(n,-1);
        int maxValIndex = n-1;
        suffix[n-1] = n-1;
        for(int i=n-2;i>=0;i--){
            if(s[i] > s[maxValIndex]){
                maxValIndex = i;
            }
            suffix[i] = maxValIndex;
        }
        
        for(int i=0;i<n;i++){
            if(s[i] != s[suffix[i]]){
                swap(s[i], s[suffix[i]]);
                break;
            }
        }
        
        return s;
    }
};