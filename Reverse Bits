class Solution {
public:
    uint32_t reverseBits(uint32_t data) {
        uint32_t tmp = 0;
        for(int n = 31; n >= 0; --n) {
            tmp = (tmp<<1) + (data & 1);
            data >>= 1;
        }
    }
};
