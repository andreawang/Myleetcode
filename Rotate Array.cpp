class Solution {
public:
    void rotate(int nums[], int n, int k) {
        
        k = k % n;
        if(k == 0)
            return ;
            
        int *tmp = new int[n];
        
        memcpy(tmp, nums+n-k, sizeof(int)*k);
        memcpy(tmp+k, nums, sizeof(int)*(n-k));
        memcpy(nums, tmp, sizeof(int)*n);
        
        delete [] tmp;
    }
};
