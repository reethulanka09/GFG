class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int i=0,j=0,c=0,m=0;
        while(j<arr.size()){
            if(arr[j]==0){
                c++;
            }
            if(c>k){
                while(c>k){
                    if(arr[i]==0){
                        c--;
                    }
                    i++;
                }
            }
            m=max(m,j-i+1);
            j++;
        }
        return m;
    }
};
