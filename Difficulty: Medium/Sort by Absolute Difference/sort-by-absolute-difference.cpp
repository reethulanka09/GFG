class Solution {
  public:
    void rearrange(vector<int> &arr, int x) {
        // code here
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push({abs(x-arr[i]),i});
        }
        // while(!pq.empty()){
        //     int first=pq.top().first;
        //     int second = pq.top().second;
        //     cout<<first<<" "<<second<<" ";
        //     pq.pop();
        // }
        vector<int>result;
        while(!pq.empty()){
            result.push_back(arr[pq.top().second]);
            pq.pop();
        }
        reverse(result.begin(),result.end());
        for(int i=0;i<result.size();i++){
            arr[i]=result[i];
        }
    }
};