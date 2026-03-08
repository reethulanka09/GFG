class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            arr[i] = arr[i] * arr[i];
            mpp[arr[i]]=1;
        }
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(mpp.find(arr[i]+arr[j])!=mpp.end()){
                    return true;
                }
            }
        }
        return false;
    }
};