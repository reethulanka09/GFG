class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        int m=0;
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        for(int i=0;i<mices.size();i++){
            m=max(m,abs(holes[i]-mices[i]));
        }
        return m;
    }
};