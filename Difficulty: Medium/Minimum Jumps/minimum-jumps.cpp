class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        if(arr[0] == 0) return -1;
        int minSteps = 0 , end = 0 , far = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            far = max(far , i + arr[i]);
            if(i == end){
                if(far == end) return -1;
                minSteps++;
                end = far;
            }
            
        }
        return (end >= arr.size() - 1 ? minSteps : -1);
    }
};
