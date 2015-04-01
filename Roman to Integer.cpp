class Solution {
    inline int map(const char c) {
        switch(c) {
            case 'I':   return 1;
            case 'V':   return 5;
            case 'X':   return 10;
            case 'L':   return 50;
            case 'C':   return 100;
            case 'D':   return 500;
            case 'M':   return 1000;
            default:    return 0;
        }
    }
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int n = 0; n < s.size(); n++) {
            if(n > 0 && map(s[n]) > map(s[n-1]))
                sum += (map(s[n]) - 2*map(s[n-1]));
            else {
                sum += map(s[n]);
            }
        }
        return sum;
    }
};
