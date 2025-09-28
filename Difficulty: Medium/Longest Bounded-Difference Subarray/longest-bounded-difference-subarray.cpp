class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        deque<int> maxD, minD;
        int i = 0, bestLen = 0, startIndex = 0;
        for (int j = 0; j < n; j++) {
            while (!maxD.empty() && arr[maxD.back()] < arr[j]) 
                maxD.pop_back();
            maxD.push_back(j);
            while (!minD.empty() && arr[minD.back()] > arr[j]) 
                minD.pop_back();
            minD.push_back(j);
            while (!maxD.empty() && !minD.empty() &&
                   arr[maxD.front()] - arr[minD.front()] > x) {
                if (maxD.front() == i) maxD.pop_front();
                if (minD.front() == i) minD.pop_front();
                i++;
            }
            if (j - i + 1 > bestLen) {
                bestLen = j - i + 1;
                startIndex = i;
            }
        }
        vector<int> result;
        for (int k = startIndex; k < startIndex + bestLen; k++) {
            result.push_back(arr[k]);
        }
        return result;
    }
};