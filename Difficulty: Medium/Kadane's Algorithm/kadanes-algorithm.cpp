class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int m1=arr[0],m2=arr[0];
        int s=0;
        for(int i=1;i<arr.size();i++){
            m1=max(arr[i],m1+arr[i]);
            m2=max(m2,m1);
        }
        return m2;
    }
};