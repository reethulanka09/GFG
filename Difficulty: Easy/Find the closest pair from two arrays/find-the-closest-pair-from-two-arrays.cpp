#define ll long long
class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        ll a=INT_MAX,b=INT_MAX;
        int n=arr1.size(),m=arr2.size();
        for(int i=0;i<n;i++){
            int idx1=lower_bound(arr2.begin(),arr2.end(),
            x-arr1[i])-arr2.begin();
            if(idx1<m && abs(x-a-b)>abs(x-arr1[i]-arr2[idx1])){
                a=arr1[i],b=arr2[idx1];
            }
            if(idx1-1>=0 && abs(x-a-b)>abs(x-arr1[i]-arr2[idx1-1])){
                a=arr1[i],b=arr2[idx1-1];
            }
        }
        return {a,b};
    }
};