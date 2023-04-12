class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string binary(32, 0);
        for (int i = 0; i < binary.size(); ++i) {
            binary[i] = '0' + (n % 2);
            n /= 2;
        }
        
        reverse(binary.begin(), binary.end());
        uint32_t ret = 0;
        uint32_t base = 1;
        for (int i = 0; i < binary.size(); ++i) {
            if (binary[i] == '1') {
                ret += base;
            }
            
            base *= 2;
        }
        
        return ret;
    }
};