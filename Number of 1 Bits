class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t sum = 0;
        for(int loop = 0; loop < 32; ++loop)
            if((n >> loop) & 1)
                ++sum;
        return sum;
    }
};
