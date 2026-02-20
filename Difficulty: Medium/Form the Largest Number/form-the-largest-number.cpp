class Solution {
  public:
    string findLargest(vector<int> &arr) {
        vector<string> v;
        for(int i = 0; i < arr.size(); i++) {
            v.push_back(to_string(arr[i]));
        }
        sort(v.begin(), v.end(), [](string &a, string &b) {
            return a + b > b + a;
        });
        if(v[0] == "0") return "0";
        string ans = "";
        for(int i = 0; i < v.size(); i++) {
            ans += v[i];
        }
        
        return ans;
    }
};