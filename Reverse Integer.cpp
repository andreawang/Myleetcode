class Solution {
public:
    int reverse (int x) {
        long ret = 0;
        int flg = 1;
        
        if (x < 0) {
            x = -x;
            flg = -1;
        }
            
        while (x > 0) {
            ret = ret*10 + x%10;
            x /= 10;
        }
        
        if (ret > INT_MAX || ret < -INT_MAX)
            return 0;
            
        return ret*flg;
    }
};
