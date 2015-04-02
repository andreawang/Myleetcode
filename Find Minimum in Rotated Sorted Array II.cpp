class Solution {
public:
    int findMin(vector<int> &num) {
        int low = 0, high = num.size(), ret = INT_MAX;
       
        while(low != high) {
            auto mid = (high + low) >> 1;
            if(num[mid] < num[low]) {
                ret = min(ret, num[mid]);
                high = mid;
            }
            if(num[mid] > num[low]) {
                ret = min(ret, num[low]);
                low = mid + 1;
            }
            else
                ret = min(ret, num[low++]);
        }
        return ret;
    }
};
