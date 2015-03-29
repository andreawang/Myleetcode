class Solution {
public:
    int longestValidParentheses(string s) {
        int count = 0;
        vector<int> keep(s.size()+1, 0);
        
        for(size_t n = 1; n <= s.size(); n++) {
            if (s[n-1] == '(')
                count++;
            else {
                if (count > 0) {
                    count--;
                keep[n] = 2;
                if (s[n - 2] == ')')
                    keep[n] += keep[n - 1];
                keep[n] += keep[n-keep[n]];
                }
            }
        }
        return *max_element(keep.begin(), keep.end());
    }
};
