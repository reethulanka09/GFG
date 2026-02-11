class Solution {
public:
    long long minCost(vector<int>& heights, vector<int>& cost) {
        int n = heights.size();
        
        vector<pair<long long,long long>> v;
        for(int i = 0; i < n; i++){
            v.push_back({heights[i], cost[i]});
        }
        
        sort(v.begin(), v.end());
        
        long long totalWeight = 0;
        for(int i = 0; i < n; i++){
            totalWeight += v[i].second;
        }
        
        long long currWeight = 0;
        long long targetHeight = 0;
        for(int i = 0; i < n; i++){
            currWeight += v[i].second;
            if(currWeight >= (totalWeight + 1) / 2){
                targetHeight = v[i].first;
                break;
            }
        }
        long long ans = 0;
        for(int i = 0; i < n; i++){
            ans += abs(heights[i] - targetHeight) * 1LL * cost[i];
        }
        
        return ans;
    }
};
