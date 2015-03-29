class Solution {
public:
    int findMin(vector<int> &num) {
        int size = num.size() - 1, left = 0, 
        right = num.size() - 1, mid;
        
        while(left <= right) {
            mid = left + (right - left) / 2;
            if (num[mid] > num[size]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return num[left];
    }
};
