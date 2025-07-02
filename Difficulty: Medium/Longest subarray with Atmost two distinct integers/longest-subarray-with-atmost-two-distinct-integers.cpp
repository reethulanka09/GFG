class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int i=0,j=0;
        int m=0;
        map<int,int>mpp;
        while(j<arr.size()){
            mpp[arr[j]]++;
            if(mpp.size()<=2){
                m=max(m,j-i+1);
            }
            else{
                mpp[arr[i]]--;
                if(mpp[arr[i]] == 0){
                    mpp.erase(arr[i]);
                }
                i++;
            }
            j++;
        }
        return m;
    }
};