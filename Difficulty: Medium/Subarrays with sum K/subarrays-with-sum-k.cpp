class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int s=0,c=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
            if(mpp.find(s-k)!=mpp.end()){
                c+=mpp[s-k];
            }
            mpp[s]++;
        }
        return c;
    }
};