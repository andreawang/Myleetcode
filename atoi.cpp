class Solution {
public:
    int myAtoi(string str) {
        int flg = 1, pos = 0, cnt = 0;
        long ret = 0;
        
        /* whether it is empty */
        if (str.empty())
            return 0;
            
        /* pass whitespace */
        while (str[pos] == '\r' || str[pos] == ' ')
            pos++;
            
        /* check whether there has a illegal character */
        if (str[pos] != '+' && str[pos] != '-' && str[pos] < '0' && str[pos] > '9')
            return 0;
            
        /* check the sign */
        if (str[pos] == '-')
        {
            flg = -1;
            pos++;
        }
        else if (str[pos] == '+')
            pos++;
        
        /* check whether there is a reduplicate sign */
        if (str[pos] == '-' || str[pos] == '+')
            return 0;
       
        while (pos < str.size())
        {
            if (str[pos] < '0' || str[pos] > '9')
                break;
            ret = ret*10 + str[pos] - '0';
            cnt++;
            pos++;
        }
        
        /* whether it is overflow */
        if (cnt > 10)
            return (flg > 0 ? INT_MAX : INT_MIN);
        
        ret *= flg;
        
        if (ret > INT_MAX)
            return INT_MAX;
        if (ret < INT_MIN)
            return INT_MIN;

        return (int) ret; 
    }
};
