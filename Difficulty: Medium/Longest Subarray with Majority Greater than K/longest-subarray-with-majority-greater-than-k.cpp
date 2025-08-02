class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int s=0,ans=0;
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k){
                s+=1;
            }
            else{
                s+=-1;
            }
            if(s>0){
                ans=i+1;
            }
            if(mpp.find(s-1)!=mpp.end()){
                ans=max(ans,i-mpp[s-1]);
            }
            if(mpp.find(s)==mpp.end()) mpp[s]=i;
        }
        return ans;
    }
};