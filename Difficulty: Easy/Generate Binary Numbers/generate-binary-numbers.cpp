class Solution {
  public:
    vector<string> generateBinary(int n) {
        vector<string> res;
        for(int i = 1; i <= n; i++) {
            int num = i;    
            int binary = 0, place = 1;

            while (num > 0) {
                binary += (num % 2) * place;
                num /= 2;
                place *= 10;
            }

            string s = to_string(binary);
            res.push_back(s);
        }
        return res;
    }
};
