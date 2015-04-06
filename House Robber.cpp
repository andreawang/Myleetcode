class Solution {
public:
    int rob(vector<int> &num) {
        
        if (num.size() == 0)
            return 0;
        if (num.size() > 1 && num[0] > num[1])
            num[1] = num[0];
        for (int n = 2; n < num.size(); n++)
            num[n] = (num[n] + num[n-2] > num[n-1] ? num[n] + num[n-2] : num[n-1]);
        return num[num.size()-1];
    }
};
